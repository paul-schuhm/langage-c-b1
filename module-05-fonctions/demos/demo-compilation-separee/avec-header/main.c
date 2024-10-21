#include <stdio.h>
#include "functions.h"

//Déclare que cette variable globale a été déclarée dans un autre fichier source
extern int x;

int main()
{
    printf("Appel de la fonction plus_one: plus_one(1)=%d\n", plus_one(x));
    return 1;
}