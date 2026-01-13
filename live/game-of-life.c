#include <stdio.h>
#include <stdlib.h>

/* 1. Définir la taille du jeu (dimensions grilles, durée de sim.) [x]
   2. Initialiser le jeu [x]
   3. Boucle sur le temps :
	Mettre à jour le jeu t => t + 1 :
		Pour chaque cellule :
			1. Compter nb voisins vivants
			2. En fonction de son état et du nb de voisins, calculer son nouvel état (t+1)
			3. Mettre à jour son etat (t+1)
   		4. Afficher etat du jeu (t)
*/

/*Dimension verticale*/
#define NROWS 5
/*Dimension horizontale*/
#define NCOLS 12
/*Nombre de pas de temps de simulation*/
#define NSTEPS 2

// =====  Déclarations (signatures/prototypes) : toutes les procédures disponibles pour construire notre programme.

/*Imprime le jeu*/
void print_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols);
/*Initialise le jeu*/
void init_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols);
/*Retourne le nb de cellules voisines vivantes de la cellulle i,j*/
int count_neighbors_alived(int grid[NROWS][NCOLS], int i, int j);
/*Retourne vrai (1) si les indices sont dans la grille, faux sinon.*/
int is_in_grid(int i, int j);


// =====  Définitions (implémentations)
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


int is_in_grid(int i, int j){
	return i < 0 || i >= NROWS || j < 0 || j >= NCOLS;
}


int count_neighbors_alived(int grid[NROWS][NCOLS], int i, int j){
	int count = 0;
	//8 voisins autour de (i,j)
	for(int di = -1 ; di <=1 ; di++){
		for(int dj = -1 ; dj <= 1; dj++){

			//Indice d'une cellule voisine
			int ni = i + di ;
			int nj = j + dj;
			//Les indices ne correspondent a aucune cellule (hors grille), passe au suivant.
			if(!is_in_grid(ni,nj)){
				continue;
			}

			//Ne pas prendre en compte la cellule inspectée, seulement ses voisines !
			if(ni == i && nj == j){
				continue;
			}

			if(grid[ni][nj] == 1)
				count++;
		}
	}
	return count;
}

int main(){

	/*Monde*/
	int grid[NROWS][NCOLS];
	//init_game(grid, NROWS, NCOLS);
	//print_game(grid, NROWS, NCOLS);
	////Nouvel état du monde (1 pas) : t + 1
	//for(int i = 0; i < NROWS; i++){
	//	for(int j = 0; j < NCOLS; j++){
	//		//Pour chaque cellule (i,j)
	//		// 1. Compter le nombre de voisins vivants.
	//		/* 2. Regles :
	//		   - Si morte ET 3 voisins vivantes => vivante
	//		   - Si vivante ET NON 2 ou 3 voisins vivantes => morte
	//		 */ 

	//		//Parcourir les voisins
	//	}
	//}

	count_neighbors_alived(grid, 0, 0);

	return 0;
}
