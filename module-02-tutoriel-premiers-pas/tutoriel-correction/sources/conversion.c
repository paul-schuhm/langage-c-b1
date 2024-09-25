#include <stdio.h>


/*

Fournit la table de conversion degrés Fahrenheit/Celsius
Avec en-tête alignés et formatage de chaines de caractères (%s)

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

    while (fahr <= upper)
    {
        celsius = (fahr - 32) * 5 / 9;
        //1ere colonne sur 3 caractères, deuxième colonne sur 6 caractères (entiers)
        // printf("%3d\t%6d\n", fahr, celsius);
        //1ere colonne sur 12 caractères, deuxième colonne sur 12 caractères dont 2 caractères après la virgule (float)
        printf("%12.0f%12.2f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}