#include <stdio.h>


/*
22/07/25
Démo sur les types et les opérateurs

Compiler et executer :
 gcc types-operateurs.cc -o demo
 ./demo
*/

int main(){

	//Déclare une variable a de type entier qui a pour valeur 122
	int a = 122;
	//Je décode la valeur 122 (stockée en binaire en mémoire) comme un entier décimal (j'obtiens 122), comme un caractère (table ASCII) j'obtiens donne la lettre 'z'. Les char sont encodés comme les entiers en mémoire. Ce qui change c'est l'interprétation.
	printf("a (interprété comme un entier)=%d, a (interprété comme un char)=%c\n", a, a);
	printf("%f\n", 5 / 2.0);
	printf("%d\n", 5 / 2);
	printf("2 > 3 est évalué à %d\n", 2 > 3);
	printf("2 < 3 est évalué à %d\n", 2 < 3);
	printf("1 == 2 est évalué à %d\n", 1 == 2);


}
