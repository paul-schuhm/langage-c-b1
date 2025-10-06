#include <stdio.h>


#define RATE_EURO_DOLLAR 1.18
#define RATE_EURO_LIVRE 0.87

#define EURO_MAX 2500

int main(){

	int euro = 1;
	//Formater avec des colonnes de taille fixe
	printf("%12s\t%12s\t%12s\n", "euro", "dollar US", "livre");
	//Écrire la premire ligne du tableau
	printf("%12d\t%12.2f\t%12.2f\n", euro, RATE_EURO_DOLLAR, RATE_EURO_LIVRE); 

	//Première partie du tableau de 20 à 100, de 20 en 20
	for(euro = 20; euro <= 100; euro += 20){
		//Variable locale
		float dollar = euro * RATE_EURO_DOLLAR;
		//                                             calculer la valeur directement
		printf("%12d\t%12.2f\t%12.2f\n", euro, dollar, euro * RATE_EURO_LIVRE); 
	}
	//Deuxième partie du tableau de 500 à 1500,de 500 en 500
	for(euro = 500; euro <= EURO_MAX; euro += 500){
		printf("%12d\t%12.2f\t%12.2f\n", euro, euro * RATE_EURO_DOLLAR, euro * RATE_EURO_LIVRE); 
	}

	return 0;
}
