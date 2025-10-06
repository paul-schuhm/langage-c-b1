#include <stdio.h>



int main(){

	//Boucles : while, do..while, for
	//if/else/else if, switch
	//break, continue

	//Afficher que les nombres pairs
	//for(int i = 0; i <= 50; i++){
	//	//Déterminer si c'est pair
	//	if(i % 2 == 0){
	//		printf("%d\n", i);
	//	}
	//}

	//Comment l'écrire avec un continue ?
	//On veut passer les nombres impairs explicitement
	//for(int i = 0; i <= 50; i++){
	//	//si c'est impair, je continue
	//	if(i % 2 == 1){
	//		continue;
	//	}
	//	printf("%d\n", i);
	//}

//Faire la meme chose, afficher nombres paires de 0 à 50, en utilisant une boucle infinie for(int i = 0;;i++)

	//int i = 0;
	//while(1){
	//	if(i % 2 == 0)
	//		printf("%d\n",i);
	//	//Arrêter la boucle
	//	if(i == 50)
	//		break;
	//	i++;
	//}


//Switch

//Saisie utilisateur

//Choice peut prendre les valeurs 0, 1 et 2

	int choice;
	printf("Indiquez votre choix:");
	scanf("%d", &choice);

	switch(choice){
		case 0:
			printf("Vous avez commandé une pizza\n");
		case 1:
			printf("Vous avez commandé un KFC\n");
			break;
		case 2:
			printf("Vous avez commandé un tacos\n");
			break;
		default:
			printf("Le choix %d est inconnu. Merci de recommencer.\n");
			break;
	}

	return 0;
}
