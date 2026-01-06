#include "stdio.h"

/*
   Rappels sur la base des adresses et des pointeurs.
 */

int main(){

  char c = 'z';
  //Faire pointer p sur c
  char* p = &c;
  //Obtenir la valeur pointée ('z'). Déférencer un pointeur = accéder à la case mémoire pointée (et à la valeur a l'adresse indiquée)
  printf("Déférencer p : %c\n", *p);
  //Modifier la valeur de c via le pointeur p
  //écrire à l'adresse contenue dans p
  //*p est une lvalue ! On peut assigner une valeur
  // p est un autre "nom" pour la meme case mémoire que c
  *p = 'a';
  printf("%c\n", c);

}
