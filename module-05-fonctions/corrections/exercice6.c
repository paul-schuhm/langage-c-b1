#include <stdio.h>
#include "functions.h"

/*
Pour compiler : cc main.c functions.c -lm -o program 
Executer : ./program
Remarque : il faut penser à "linker" la librairie mathématique (math.h) avec l'argument -lm
*/

int main(){

	printf("Série : [0, 0, 0, 0]\n");
	printf("Moyenne = %f\n", average(0, 0, 0, 0));
	printf("Ecart type = %f\n", std(0, 0, 0, 0));

	printf("Série : [1, 2, 3, 4]\n");
	printf("Moyenne = %f\n", average(1,2,3,4));
	printf("Ecart type = %f\n", std(1,2,3,4));

	return 0;
}
