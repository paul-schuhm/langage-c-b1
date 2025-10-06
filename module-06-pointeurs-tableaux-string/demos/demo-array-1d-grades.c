#include <stdio.h>


#define N 12


/*calcule la moyenne d'une série de notes. Passage d'un tableau en argument à une fonction*/
float mean(float[]);

float mean(float grades[]){

	float sum = 0.;
	for(int i = 0; i < N; i++){
		sum += grades[i];
	}

	float mean = sum / N;

	return mean;
}

int main(){

	/*N notes de 0 à 20, on veut savoir combien d'étudiant/es ont une note > moyenne*/

	/*Réserve un emplacement de N éléments de type float. Indices de 0 à N-1*/
	//Liste d'initialisation :
	//float grades[7] = {0, 0, 0, 0, 0, 0, 0};
	//Meme chose mais avec syntaxe plus compacte :

	//Nos notes
	float grades[N] = {15, 12, 6, 2, 4, 4.7, 0, 18, 7, 9, 5, 13.5};

	//Appel à une fonction, passage d'un tableau en arg
	float average = mean(grades);

	printf("Moyenne des notes : %f\n", average); 

	/*Afficher les notes supérieurs à la moyenne de la classe*/
	int nb = 0;
	for(int i = 0; i < N; i++){
		if(grades[i] >= average){
			//Une note au dessus de la moyenne
			//J'incrémente le compteur de note au dessus de la moyenne
			nb++;
			printf("La note %d %f est au dessus de la moyenne\n",i, grades[i]);
		}
	}

	printf("Il y a %d/%d de notes au dessus de la moyenne", nb, N);


	return 0;
}
