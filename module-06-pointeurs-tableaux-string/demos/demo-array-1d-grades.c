/*
Ce programme permet d'afficher les notes au dessus de la moyenne de la classe, ainsi que le nombre de notes au dessus de la moyenne.

Exercice : 1) Compter le nombre de notes en dessous de la moyenne 2) Afficher la meilleure note et la plus mauvaise note 3) Modifier la fonction mean pour passer la taille du tableau en argument de la fonction. Pourquoi le faire ?*/

#include <stdio.h>

/*Nombre de notes*/
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
	float grades[N] = {15, 12, 6, 2, 4, 4.7, 0, 18, 7, 9, 5, 13.5};

	//Appel à une fonction, passage d'un tableau en arg
	float average = mean(grades);

	printf("Moyenne des notes : %f\n", average); 

	/*Afficher les notes supérieurs à la moyenne de la classe*/
	int nb_gt_average = 0;
	for(int i = 0; i < N; i++){
		if(grades[i] >= average){
			//Une note au dessus de la moyenne
			//J'incrémente le compteur de note au dessus de la moyenne
			nb_gt_average++;
			printf("La note %d %f est au dessus de la moyenne\n",i, grades[i]);
		}
	}

	printf("Il y a %d/%d notes au dessus de la moyenne", nb_gt_average, N);

	return 0;
}
