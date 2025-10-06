#include <stdio.h>

/*
   Ecrire une table de conversion entre monnaies (euro, dollar, livre)
   allant de (en euros) 1 ) 1500 de cette manière : 
   1
   20
   40
   60
   80
   100
   1000
   1500
 */

#define RATE_EURO_DOLLAR 1.18
#define RATE_EURO_LIVRE 0.87

int main(){

	printf("Avec deux boucles for:\n");

	printf("%12s|%12s|%12s\n", "Euro", "Dollar US", "Livre");
	printf("%12d|%12.2f|%12.2f\n", 1, RATE_EURO_DOLLAR, RATE_EURO_LIVRE);
	for(int i = 20 ; i <= 100; i+= 20) 
		printf("%12d|%12.2f|%12.2f\n", i, i * RATE_EURO_DOLLAR, i * RATE_EURO_LIVRE);
	for(int i = 500; i <= 1500; i+=500)
		printf("%12d|%12.2f|%12.2f\n", i, i * RATE_EURO_DOLLAR, i * RATE_EURO_LIVRE);


	printf("Avec une boucle while:\n");

	printf("%12s|%12s|%12s\n", "Euro", "Dollar US", "Livre");
	printf("%12d|%12.2f|%12.2f\n", 1, RATE_EURO_DOLLAR, RATE_EURO_LIVRE);
	int euro = 0;
	while(euro <= 1500){
		printf("%12d|%12.2f|%12.2f\n", euro, euro * RATE_EURO_DOLLAR, euro * RATE_EURO_LIVRE);
		if(euro == 100)
			euro = 500;

		if(euro > 100){
			euro += 500;
		}else{
			euro += 20;
		}
	}



	return 0;
}
