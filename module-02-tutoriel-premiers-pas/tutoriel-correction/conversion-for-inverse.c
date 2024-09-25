#include <stdio.h>

/*

Fournit la table de conversion degrés Fahrenheit/Celsius
Sens Inverse : de upper à lower

*/
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%12s%12s\n", "Farhreinheit", "Celsius");

    for (fahr = upper; fahr >= lower; fahr -= step)
    {
        celsius = (fahr - 32) * 5 / 9;
        // printf("%d\t%d\n", fahr, celsius);
        // 1ere colonne sur 3 caractères, deuxième colonne sur 6 caractères (entiers)
        // printf("%3d\t%6d\n", fahr, celsius);
        printf("%12.0f%12.2f\n", fahr, celsius);
    }

    return 0;
}