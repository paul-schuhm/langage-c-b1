#include <stdio.h>

int main(){

    //Ecrire un programme qui compare deux valeurs
    //et détermine la valeur max entre les 2.
    int a = 2;
    int b = 3;
    int max;

    // if (a > b)
    //     max = a;
    // else
    //     max = b;

    //Avec opérateur conditionnel

    max = a > b ? a : b;
    

    printf("max=%d\n", max);


    return 0;
}