#include <stdio.h>
/**
 * Démonstration sur l'équivalence entre
 * identificateur d'un tableau et pointeur constant
 * et sur la déclaration d'un pointeur constant
 */
void main(void){

	int a[2] = {1, 2};
	int i = 3;

	//a est un pointeur constant sur le premier élément du tableau
	printf("a[0]=%d\n",*a);
	printf("a[0]=%d\n",a[0]);
	//a est un pointeur constant, il ne peut pas pointer sur autre chose
	//Cette tentative d'affectation va lever une erreur à la compilation
	//a = &i;
	
	//Equivalent: déclaration d'un pointeur constant sur un int
	//Ici b est affecté à a, il pointe aussi sur le premier élément du tableau
	int *const b = a;
	printf("b=%d\n",*b);
	a[0]=5;
	printf("b=%d\n",*b);
	//Erreur à la compilation: le pointeur ne peut pas être modifié
	//b=&i;

	return;
}
