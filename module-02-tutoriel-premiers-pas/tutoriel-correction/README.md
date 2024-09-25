# Langage C : Module 02 - Premiers pas en C - Corrections

- [Langage C : Module 02 - Premiers pas en C - Corrections](#langage-c--module-02---premiers-pas-en-c---corrections)
  - [Code source](#code-source)
  - [Partie 1 : Anatomie d'un premier programme C](#partie-1--anatomie-dun-premier-programme-c)
  - [Partie 2 : Nouvelles idées](#partie-2--nouvelles-idées)
    - [Constantes symboliques](#constantes-symboliques)


> Ce tutoriel est en grande partie basé sur le premier chapitre de l'ouvrage The C programming Language (K&R). Il vous a été fourni en PDF.

## Code source

[Accéder aux sources C commentées](./sources/)

## Partie 1 : Anatomie d'un premier programme C

3. Si on **enlève** les caractères "`\n`" on observe qu'il n'y a plus de nouvelle ligne affichée sur la sortie. Le caractère \n est donc le caractère de nouvelle ligne (*newline*). 
5. Si l'argument `\c` est placé on obtient un *warning* (avertissement) de la part du compilateur. Il nous prévient que ce caractère n'existe pas. Un *warning*, par défaut, n'empêche pas la compilation et la production de l'exécutable. Mais le comportement de ce dernier peut être indéfini ou indésirable. On en conclut donc ici que `\c` n'existe pas. 

## Partie 2 : Nouvelles idées

1. Les *variables* de ce programme sont :
   1. La température en Fahrenheit, encodée par la variable `fahr`;
   2. La température en Celsius, encodée par la variable `celsius`;
   3. La valeur de départ (limite basse) Fahrenheit, encodée par la variable `lower`;
   4. La valeur finale (limite haute) Fahrenheit, encodée par la variable `upper`;
   5. Le pas de température, pour passer d'une valeur à l'autre et construire la table, encodée dans la variable `step`;
2. Pour créer l'executable `conversion`, on utilise l'option `-o` du compilateur (pour `--output`) :

~~~bash
gcc conversion.c --output=conversion
#Ou d'une manière plus compacte    
gcc conversion.c -o conversion
./conversion
~~~

3. Pour justifier à droite les valeurs, on peut écrire la première colonne sur 3 caractères et la deuxième sur 6 caractères :

~~~c
printf("%3d\t%6d\n", fahr, celsius);
~~~

On le fait grâce aux spécificateurs (ou codes) de format `%xd` où `x` représente le nombre minimal de caractères sur lequel écrire la valeur (la *largeur*), `d` représente une valeur à interpréter comme un nombre entier (`int`). S'il reste des emplacements de caractère vides, ils sont placés à gauche (*padding*) par défaut.

4. Il faut penser à également modifier les spécificateurs de format `%d` en `%f`, sinon le programme va essayer d'interpréter les nombres flottant comme des entiers et produire des valeurs aberrantes.

5. Le spécificateur de format `%x.yf` indique qu'il faut écrire le nombre flottant (y compris le `.`) sur `x` caractères (*largeur*) minimum avec `y` chiffres après la virgule.

### Constantes symboliques

Oui il existe des valeurs constantes : 

- lower
- upper
- step

On peut donc les **remplacer** par des constantes symboliques : cela permet d'ajouter plus de contexte et exprime mieux notre intention : ces valeurs ne doivent pas changer au cours de l'execution, i.e, ce sont des paramètres qui contrôlent le tableau de conversion.

~~~c
#define LOWER 0 /*limite inf. de la table*/
#define UPPER 300 /*limite sup. de la table*/
#define STEP 20 /*taille du pas*/
~~~