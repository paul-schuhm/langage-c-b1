#include <stdio.h>

#define LOWER 0 /*limite inf de la table*/
#define UPPER 300 /*limite sup de la table*/
#define STEP 20 /*taille du pas*/

/*

Fournit la table de conversion degrés Fahrenheit/Celsius
Version avec boucle for et constantes symboliques

*/
int main()
{
    float fahr;
    float celsius;

    printf("%12s%12s\n", "Farhreinheit", "Celsius");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        celsius = (fahr - 32) * 5 / 9;
        printf("%12.0f%12.2f\n", fahr, celsius);
    }

    return 0;
}