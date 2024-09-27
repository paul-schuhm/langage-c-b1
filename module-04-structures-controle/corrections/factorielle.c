#include <stdio.h>

/**
 * Calcul de la factorielle d'un entier
 * (Version procédurale avec while)
 */
int main(){

	int n, result ;

	printf("Saisir un entier positif :\n");

	scanf("%d", &n);

	//Exit. La fonction factorielle n'est pas définie pour des nombres négatifs.
	if(n < 0)
		return 0; //arrête le programme

	if(n == 0 ){
		printf("Le factoriel de 0 est 1, par définition\n");
		return 0;
	}

	result = 1;
	while(n != 0){
		result *= n;
		n--;
		//Ou plus compacte :
		// result *= n-- ;
	}

	printf("Factorielle : %d\n", result);

	return 0;
}
