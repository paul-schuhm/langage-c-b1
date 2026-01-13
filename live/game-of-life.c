#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

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
#define NROWS 30
/*Dimension horizontale*/
#define NCOLS 150
/*Nombre de pas de temps de simulation*/
#define NSTEPS 100

// =====  Déclarations (signatures/prototypes) : toutes les procédures disponibles pour construire notre programme.

/*Imprime le jeu*/
void print_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols);
/*Initialise le jeu*/
void init_game(int grid[NROWS][NCOLS], size_t nrows, size_t ncols);
/*Retourne le nb de cellules voisines vivantes de la cellulle i,j*/
int count_neighbors_alived(int grid[NROWS][NCOLS], int i, int j);
/*Retourne vrai (1) si les indices sont dans la grille, faux sinon.*/
int is_in_grid(int i, int j);
/*Calcule le nouvel état du jeu et le stocke dans next*/
void update_game(int grid[NROWS][NCOLS], int next[NROWS][NCOLS]);
/*Copie next dans grid*/
void copy(int next[NROWS][NCOLS], int grid[NROWS][NCOLS]);


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
  return i >= 0 && i < NROWS && j >= 0 && j < NCOLS;
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


void update_game(int grid[NROWS][NCOLS], int next[NROWS][NCOLS]){
  // Pour chaque cellule : 
  // 1. Compter le nombre de voisins vivants.
  /* 2. Regles d'évolution :
     - a) Si vivante ET NON 2 ou 3 voisins vivantes => morte
     - b) Si morte ET 3 voisins vivantes => vivante
   */ 
  for(int i = 0; i < NROWS; i++){
    for(int j = 0; j < NCOLS; j++){

      int n_alived = count_neighbors_alived(grid, i, j);	

      if(grid[i][j] == 1){
	//Regle a)
	if(n_alived == 2 || n_alived == 3){
	  next[i][j] = 1;
	}
	else{
	  next[i][j] = 0;
	}
      }
      else{
	//Regle b)
	if(n_alived == 3){
	  next[i][j] = 1;
	}
	else{
	  next[i][j] = 0;
	}
      }
    }
  }
}

void copy(int next[NROWS][NCOLS], int grid[NROWS][NCOLS]){
  for(int i = 0; i < NROWS; i++){
    for(int j = 0; j < NCOLS; j++){
      grid[i][j] = next[i][j];
    }
  }
}

int main(){

  srand((unsigned int) time(NULL));

  /*Monde*/

  /*Pattern spécial : 'Blinker' (period 2). Cette structure doit osciller indéfiniment. Bien pour tester.*/
  //int grid[NROWS][NCOLS] = {
  //  {0 , 0 , 0 , 0 , 0},
  //  {0 , 0 , 0 , 0 , 0},
  //  {0 , 1 , 1 , 1 , 0},
  //  {0 , 0 , 0 , 0 , 0},
  //  {0 , 0 , 0 , 0 , 0},
  //};

  int grid[NROWS][NCOLS];
  /*Copie du nouvel état du monde*/
  int next[NROWS][NCOLS] = {0};

  init_game(grid, NROWS, NCOLS);

  for(int t = 0 ; t < NSTEPS ; t++){
    printf("t=%d/%d (%.2f %%)\n", t+1, NSTEPS, (float)(t+1)/NSTEPS * 100);
    print_game(grid, NROWS, NCOLS);
    update_game(grid, next);
    copy(next, grid);
    /*attend 1 seconde avant de poursuivre l'execution */
    sleep(1);
    printf("\n\n");
  }

  return 0;
}
