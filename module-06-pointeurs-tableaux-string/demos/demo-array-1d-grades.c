#include <stdio.h>


#define N 12

int main(){

	/*N notes de 0 à 20, on veut savoir combien d'étudiant/es ont une note > moyenne*/

	/*Réserve un emplacement de N éléments de type float. Indices de 0 à N-1*/
	//Liste d'initialisation :
	//float grades[7] = {0, 0, 0, 0, 0, 0, 0};
	//Meme chose mais avec syntaxe plus compacte :

	//Nos notes
	float grades[N] = {15, 12, 6, 2, 4, 4.7, 0, 18, 7, 9, 5, 13.5};

	//Calculer la moyenne
	float sum = 0.;
	for(int i = 0; i < N; i++){
		sum += grades[i];
	}

	/*Moyenne des notes*/
	float mean = sum / N;

	printf("Moyenne des notes : %f\n", mean); 

	/*Afficher les notes supérieurs à la moyenne de la classe*/
	int nb = 0;
	for(int i = 0; i < N; i++){
		if(grades[i] >= mean){
			//Une note au dessus de la moyenne
			//J'incrémente le compteur de note au dessus de la moyenne
			nb++;
			printf("La note %d %f est au dessus de la moyenne\n",i, grades[i]);
		}
	}

	printf("Il y a %d/%d de notes au dessus de la moyenne", nb, N);


	return 0;
}
