#include <stdio.h>

//Demonstration des constantes symboliques. Avant la compilation, le
//préprocesseur remplace dans le texte du code source toutes les occurrences
//de FIRST_NAME par la valeur "John"

#define FIRST_NAME "John"

main(){
    printf("hello %s\n", FIRST_NAME);
}