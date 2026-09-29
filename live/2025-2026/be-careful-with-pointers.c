#include "stdio.h"

/*
    Précautions minimales sur la manipulation des pointeurs.
*/

int main(){

  int* p;
  //*p = 3; //Déférencer un pointeur non initialisé !!! Erreur !

  //Toujours initialiser un pointeur !
  int* q = NULL;

  //Attention, ne jamais déférence un pointeur NULL !
  //Toujours vérifier qu'un pointeur pointe "sur qqchose" avant de le déférencer !
  if(q){
    *q = 3;
  }


}
