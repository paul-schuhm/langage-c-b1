#include <stdio.h>

/*
 * Dans ce programme, la fonction foo est utilisée avant d'être définie.
 * mais on prévient le compilateur à l'avance que la fonction foo existe
 * via se DECLARATION. On prévient que le compilateur qu'il existe une fonction
 * qui s'appelle foo qui ne retourne aucune valeur et ne prend aucun argument.
 *
 * Grace a cela, on peut définir la fonction (implémentation) n'importe où,
 * avant ou apres son appel, ou même dans un fichier différent tant
 * que la declaration apparait AVANT son utilisation.
 *
 *
 * Remarque : essayer d'appeler foo avec des arguments et ne pas respecter son prototype, comme
 * par exemple foo(1,2). Une erreur sera levée, grace à la déclaration qui précéde
 * et permet de faire des vérifications.
 */

//Déclaration de la fonction foo
void foo(void);

int main(){
	foo();
	return 0;
}
//Je peux à présent placer la définition de la fonction foo n'importe où !
//Avant ou après la déclaration, dans un autre fichier.
//Essayer de déplacer la définition dans ce fichier et observer que cela ne produit aucun effet.
void foo(void){
	printf("foo\n");
}
