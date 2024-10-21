# Module 05 - Fonctions - Démo sur la compilation séparée des sources

Dans cette démonstration, nous illustrons le principe et l'intérêt de la compilation séparée des sources.

- [Module 05 - Fonctions - Démo sur la compilation séparée des sources](#module-05---fonctions---démo-sur-la-compilation-séparée-des-sources)
  - [Situation initiale](#situation-initiale)
  - [Compilation naïve](#compilation-naïve)
  - [Compilation des sources](#compilation-des-sources)
  - [Séparation des déclarations et des définitions](#séparation-des-déclarations-et-des-définitions)
  - [Compilation correcte](#compilation-correcte)
  - [Pourquoi séparer les déclarations des définitions ?](#pourquoi-séparer-les-déclarations-des-définitions-)


## Situation initiale

Nous avons deux fichiers sources :

- `main.c` qui contient le point d'entrée du programme (fonction `main`);
- `functions.c` qui contient la déclaration et la définition d'une fonction 

Séparer les sources en plusieurs fichiers permet de les modifier, les compiler et les distribuer à notre guise. Ainsi, les fonctions définies dans `functions.c` peuvent servir dans un autre projet, être distribuer, etc. **C'est une approche indispensable lors de la réalisation de programmes complexes et intéressants**.

## Compilation naïve

Si l'on essaie de compiler `main.c` directement voici ce que l'on obtient :

~~~bash
gcc main.c
main.c: In function ‘main’:
main.c:6:63: warning: implicit declaration of function ‘plus_one’ [-Wimplicit-function-declaration]
    6 |     printf("Appel de la fonction plus_one: plus_one(1)=%d\n", plus_one(1));
      |                                                               ^~~~~~~~
/usr/bin/ld : /tmp/ccz8Vv48.o : dans la fonction « main » :
main.c:(.text+0xf) : référence indéfinie vers « plus_one »
collect2: error: ld returned 1 exit status
~~~

- Un **warning**, car en effet, lors de la compilation de `main.c`, la fonction `plus_one` n'est déclarée nulle part;
- Une **erreur** du programme `/usr/bin/ld` `référence indéfinie vers « plus_one »`. `ld` est le *linker*, un programme utilisé par gcc.

> Les déclarations implicites sont **interdites** dans la norme C99, elles lèvent une erreur et non un warning.

La compilation du fichier `main.c` **ne peut pas produire un executable** car lors de l'appel à la fonction `plus_one`, le compilateur ne trouve pas le binaire de cette fonction (le code executable !). *L'édition des liens* est une étape de la compilation qui permet d'indiquer au compilateur où trouver ce code binaire. Il permet, à l'execution du programme, de remplacer l'appel à la fonction par son binaire.

## Compilation des sources

On peut compiler *sans éditer les liens* dans un premier temps, avec l'option `-c` de `gcc`. Cela produit des fichiers *objets* (`.o`). Ces fichiers sont des fichiers binaires qui ne sont *pas encore executables*.

~~~bash
gcc -c functions.c
gcc -c main.c
~~~

> Nous avons toujours le *warning* lors de la compilation de `main.c` car la déclaration de `plus_one` est toujours introuvable pour l'instant. Nous réglerons ce problème par la suite

Pour produire l'executable final, il faut *réaliser l'édition des liens*, lier les deux fichiers objets entre eux:

~~~bash
gcc functions.o main.o -o exec
./exec
~~~

Avec cette commande, `gcc` fait l'*édition des liens* (*linking*) : lors de l'appel à la fonction `plus_one` dans `main.o`, il utilisera le code binaire présent dans `functions.o`. `exec` est à présent un executable fonctionnel. 

## Séparation des déclarations et des définitions

Le problème c'est que l'on ne bénéficie pas ici des effets de la déclaration de la fonction `plus_one` lors de la compilation, on perd ainsi l'aide précieuse du compilateur et de ses vérifications faites sur les appels de `plus_one`. C'est ce que nous indique le *warning* "Déclaration implicite". Il **faut** informer le compilateur que cette fonction existe quelque-part **et** lui fournir ses détails (nom, nombre d'arguments et type des arguments, type de retour, etc.) : il faut lui fournir la déclaration de la fonction. Il faut qu'elle soit présente, à la compilation, dans le fichier `main.c`. 

Pour cela on va séparer `functions.c` en *deux* fichiers :

- Un fichier `functions.h` qui **contient la déclaration de la fonction** : c'est un fichier en-tête ou *header*;
- Un fichier `functions.c` qui **contient la définition** (implémentation) de la fonction : c'est un fichier *source*

## Compilation correcte

A présent, il suffit d'inclure `functions.h` dans` main.c`. C'est ce que l'on fait depuis le début avec le header `stdio.h` pour bénéficier de la déclaration de `printf`.

Voici le résultat de cette opération :

- Fichier `main.c` :

~~~c
#include <stdio.h>
//Inclusion de notre header
#include "functions.h"
int main()
{
    printf("Appel de la fonction plus_one: plus_one(1)=%d\n", plus_one(1));
    return 1;
}
~~~

- Fichier `functions.h` :

~~~c
/*Fichier header : contient uniquement les déclarations*/
int plus_one(int);
~~~

- Fichier `functions.c` :

~~~c
/* On inclut le header aussi, pour s'assurer que le prototype est respecté à l'implémentation */
#include "functions.h"
/*Fichier source : contient la définition de la fonction*/
int plus_one(int a){
    return ++a;
}
~~~

Recompilons le programme :

~~~bash
gcc -c functions.c
gcc -c main.c
~~~

On produit d'abord le binaire de notre fonction `plus_one`, puis le binaire de `main`. Remarquez que le *warning* a disparu : grâce à l'inclusion du header, la déclaration de la fonction `plus_one` est à présent accessible au compilateur. 

Il ne reste plus qu'à *lier* les deux fichiers objets entre eux :

~~~bash
#Édition des liens
gcc functions.o main.o -o exec
#Execution
./exec
~~~

## Pourquoi séparer les déclarations des définitions ?

On aurait pu laisser la déclaration et la définition dans un seul fichier source `functions.c` et faire un include de ce fichier dans le fichier principal. Pourquoi créer deux fichiers (un fichier `.h` et un fichier `.c`) ?

Il y a plusieurs raisons pour cela. En voici quelques-unes :

- **Encapsulation** : séparer les déclarations des définitions permet d'utiliser les fonctions sans se soucier ni avoir accès de leurs détails d'implémentation. On peut ainsi *masquer* des détails d'implémentation à l'utilisateur·ice de notre code;
- **Modularité** : Cette séparation favorise la réutilisation du code et permet de construire des "modules" indépendants les uns des autres. On peut regrouper des fonctions dans un module compilé et l'utiliser dans d'autres projets. Cela permet à terme de créer des bibliothèques (comme la bibliothèque standard). Pour utiliser notre bibliothèque, un utilisateur n'a besoin que de nos fichiers header (déclarations) et des fichiers objets;
- **Compilation conditionnelle** : les fichiers objet peuvent être compilés *indépendamment*. Si un fichier est modifié, seuls les fichiers concernés doivent être recompilés, ce qui accélère le temps de compilation (qui peut devenir très long !) et permet de redéployer uniquement des modules spécifiques. Par exemple, si l'on modifie la définition de `plus_one`, il suffit de recompiler `functions.c` et non `main.c`;
- **Prévention des redéfinitions** : en déclarant les fonctions dans un fichier d'en-tête, on s'assure qu'il n'y a pas de redéfinition multiple des fonctions lors de l'édition des liens, puisque la définition de la fonction n'est présente qu'une seule fois dans un fichier source. Imaginons que notre programme utilise un autre fichier `utils.c` qui utilise lui-même `plus_one`. Si `functions.c` contient à la fois la définition et la déclaration de `plus_one`, alors `main` se retrouverait avec *deux* définitions de `plus_one` (via l'include de `functions.c` et `utils.c`), ce qui provoquerait une erreur. La gestion des définitions serait inutilement compliquée et *error-prone*. La séparation des définitions et des déclarations facilite une organisation du code où chaque fonction est définie *une seule fois*.


Dans un projet réel, ou lorsque le volume de code augmente, **on sépare toujours les déclarations des définitions** !