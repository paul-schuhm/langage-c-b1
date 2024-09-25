#include <stdio.h>

/*

Fournit la table de conversion degrés Fahrenheit/Celsius
Sens Inverse : de upper à lower

*/
int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = -50;
    upper = 120;
    step = 10;

    fahr = lower;

    printf("%12s%12s\n", "Celsius", "Farhreinheit");

    for (celsius = lower; celsius <= upper; celsius += step)
    {
        //On inverse
        fahr = celsius  * 9 / 5 + 32;
        printf("%12.0f%12.2f\n", celsius, fahr);
    }

    return 0;
}