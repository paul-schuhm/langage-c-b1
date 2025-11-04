#include <stdio.h>
#include <stdlib.h>


/*calcule la fonction d'ackerman de manière récursive*/
int ackerman(int,int);

/*calcule la fonction de Fibonacci de manière récursive*/
int fib(int);

int ackerman(int m, int n){

	if(n < 0 || m < 0){
		printf("La fonction Ackerman est définie pour n >= 0 et m >= 0\n");
		/*erreur, on arrête la procédure*/
		exit(EXIT_FAILURE);
	}

	if(m == 0)
		return n + 1;

	if(n == 0)
		return ackerman(m-1, 1);

	return ackerman(m-1, ackerman(m, n-1));

}

int fib(int n){

	if( n < 0){
		/*erreur, on arrête la procédure*/
		printf("La fonction de Fibonacci est définie pour n >= 0\n");
		exit(EXIT_FAILURE);
	}

	/*Par définition (base case)*/
	if(n == 0)
		return 0;

	if(n == 1)
		return 1;

	return fib(n-1) + fib(n-2);
}

int main(){

	/*Fonction d'Ackerman*/
	printf("ackerman(%d,%d)=%d\n", 0, 0, ackerman(0, 0));
	printf("ackerman(%d,%d)=%d\n", 4, 0, ackerman(4, 0));
	printf("ackerman(%d,%d)=%d\n", 3, 3, ackerman(3, 4));
	printf("ackerman(%d,%d)=%d\n", 3, 2, ackerman(3, 2));
	//printf("ackerman(%d,%d)=%d\n", 4, 2, ackerman(4, 2)); Impossible à représenter avec les types
	//fournis par le C. A(4,2) vaut déjà 2^2^2^65536 -3, plus que le nombre d'atomes dans l'univers !
	//printf("ackerman(%d,%d)=%d\n", -1, 2, ackerman(-1, 2)); //Avec une erreur

	/*Fonction de Fibonacci*/
	printf("fib(%d)=%d\n", 3, fib(3));
	printf("fib(%d)=%d\n", 8, fib(8));

	return 0;
}
