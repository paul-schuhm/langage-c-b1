#include "stdio.h"


int main(){

  char c = 'z';
  //p pointe sur c
  char* p = &c;
  //Obtenir la valeur pointée ('z'). Déférencer un pointeur = recuperer valeur a l'adresse pointée
  printf("%c\n", *p);
  //Modifier la valeur de c via le pointeur p
  *p = 'a';
  printf("%c\n", c);
  


}
