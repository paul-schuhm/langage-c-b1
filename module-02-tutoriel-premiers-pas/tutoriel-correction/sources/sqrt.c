#include <stdio.h>
#include <math.h>
//Nombre d'itérations
#define N 5

//Pour ne pas avoir d'erreur lors de la compilation, il faut linker explicitement la lib mathématiques "lm"
//gcc sqrt.c -lm

int main()
{

    float input;

    for (int i = 0; i < N; i++)
    {
        printf("Donner un nombre positif et je vous donne la racine carrée: ");
        //Saisie au clavier formaté sous forme de nombre décimal que l'on stocke dans la variable input
        scanf("%f", &input);
        if (input > 0.0)
            printf("La racine carrée de %f vaut %.2f\n", input, sqrt(input));
        else{
            printf("Le nombre %.2f ne possède pas de racine carrée\n", input);
        }
    }

    printf("Programme terminé, au revoir\n");
}