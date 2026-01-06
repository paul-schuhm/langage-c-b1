#include "stdio.h"

#define ROWS 3
#define COLS 2

//Fonction qui affiche tableau 1d
//Signature  : nom fonction, arg + type, type de retour (design)
//Déclaration/Prototype

/*Imprime un tableau sur la sortie standard.*/
void print_tab_1d(int tab[], size_t n);

//Définition (Implémentation)
void print_tab_1d(int tab[], size_t n){
  for(int i = 0 ; i < n ; i++){
    printf("%d\n", i, tab[i]);
  }
}

//Procédure pour afficher un tableau 2d
//Solution générale : void print_2d_array(int **tab, int rows, int cols);

/*Imprime un tableau 2d sur la sortie standard. Chaque élément est écrit sur une ligne.*/
void print_tab_2d(int tab[][COLS]);

void print_tab_2d(int tab[][COLS]){
  for(int i=0; i < ROWS; i++){
    for(int j=0; j < COLS; j++){
      //Afficher sous forme de grille
      /*
      01000
      01111
      01110
      10100
      01000
      */
      printf("%d\n",tab[i][j]); 
    }
  }
}


int main(){

  //Variable statique : tableau à 1d
  int tab[10] = {1,2,3,4,5};
  print_tab_1d(tab, 10);
  //un tableau (variable) 'tab' est un pointeur sur 1er element
  //Afficher le 1er element a partir de 'tab'
  //Syntaxe tableau (sucre syntaxique)
  printf("%d\n", tab[0]);
  //Syntaxe 'pointeur' (%p : hexadecimale)
  printf("%p\n", tab);
  printf("%d\n", *tab);
  //Arithmétique sur pointeur : p++, p-- p+=2, etc. 
  //Afficher le 2e element
  //tab[i] === *(tab + i)
  printf("%d\n", *(tab+1));
  //tab est un pointeur constant ! Vous pouvez pas le modifier
  //Un pointeur constant = on peut pas le faire pointer sur autre chose.
  //tab = tab + 1 ;//Non !
  //Declarer un pointeur p qui pointe sur 1er element du tableau
  int *p = tab ;
  printf("p=%d\n", *p);
  // 1 2 3 4 5 0 ...
  printf("p=%d\n", *(p+3));
  for(int i= 0; i<10; i++)
    printf("%d,", *(p+i));

  printf("*Tableaux 2D\n");
  //Grille, representation 2d, tableau a 2 dimensions (lignes, colonnes)
  // 0,0 0,1 1,0 1,1 2,0, 2,1

  int tab2[ROWS][COLS] = {{1,2}, {3,4}, {5,6}};
  //Parcourir tableau 2d :
  print_tab_2d(tab2);

 //Procédure pour afficher un tableau 1d : ecriture de fonctions en C, passer tab en arg [x]

 //Fonctions : 1) déclaration de la fonction (signature, interface, prototype) : nom, type de retour, arg et leur type. Permettre de partager facilement le code, compilation va pouvoir vérifier.
 //Procédure pour afficher un tableau 2d [x]

 //Procédure pour "applatir un tableau 2d en un tableau 1d"


 
}
