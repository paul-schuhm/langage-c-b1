#include <stdio.h>
#include <stdlib.h>

/*
   1. Définir la taille du jeu (dimensions grilles, durée de sim.) [x]
   2. Initialiser le jeu [x]
   3. Mettre à jour le jeu []
*/

/*Dimension verticale*/
#define NROWS 5
/*Dimension horizontale*/
#define NCOLS 12
/*Nombre de pas de temps de simulation*/
#define NSTEPS 2

//Déclarations (signature/prototypes)

/*Imprime le jeu*/
void print_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols);
/*Initialise le jeu*/
void init_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols);

//Définitions (implémentations)
void print_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols){
	for(int i = 0; i < NROWS; i++){
		for(int j = 0; j < NCOLS; j++){
			//Représentation d'une cellule (opérateur ternaire ?)
			//expression ? valeur si vrai (1) : valeur si faux (0 ici).
			char symbol = grid[i][j] ? 'X' : '.';			
			printf("%c", symbol);
		}
		printf("\n");
	}
}


void init_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols){
	/*Initialise monde/etat du jeu*/
	for(int i = 0; i < NROWS; i++){
		for(int j = 0; j < NCOLS; j++){
			//50% chance d'etre vivant ou mort
			grid[i][j] = rand() % 2 ;
		}
	}
}

int main(){

	/*Monde*/
	int grid[NROWS][NCOLS];
	init_game(grid, NROWS, NCOLS);
	print_game(grid, NROWS, NCOLS);

	//Nouvel état du monde (1 pas) : t + 1


	for(int i = 0; i < NROWS; i++){
		for(int j = 0; j < NCOLS; j++){
			//Pour chaque cellule (i,j)
			// 1. Compter le nombre de voisins vivants.
			/* 2. Regles :
				- Si morte ET 3 voisins vivantes => vivante
				- Si vivante ET NON 2 ou 3 voisins vivantes => morte
			 */ 

			//Parcourir les voisins
			int nb_neighbors_alive = 0;


		}
	}


}
