#include <stdio.h>

#define RATE_EURO_DOLLAR 1.18

//EOF (End Of File) == "Ctr+c" ou "Ctr+z"

int main(){

	float euro;

	while(euro != EOF){
		printf("Saisir une somme en euros: ");
		scanf("%f", &euro);
		printf("%.1f euros = %.1f dollars\n", euro, euro * RATE_EURO_DOLLAR );
	}

}
