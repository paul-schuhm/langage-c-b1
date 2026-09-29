#include <stdio.h>

// Constantes symboliques (instructions-pré processeur)

// A la compilation, le préprocesseur va remplacer toutes les occurences de ces chaines (LOWER, UPPER et STEP)
// par leur valeur de remplacement (-50, 150 et 10)

#define LOWER -50
#define UPPER 150
#define STEP 2

/*Fournit la table de conversion degrés Fahrenheit/Celsius*/
int main()
{

    float fahr, celsius;

    printf("Celsius\tFahrenheit\n");
    // Table Celsius - Fahrenheit (inverse)
    for(celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP ){
        fahr = 32 + 9./5 * celsius;
        printf("%7.2f\t%10.2f\n", celsius, fahr);
    }

    //Imprimer les en-têtes (header)
    //printf("Fahrenheit\tCelsius\n");

    // for(fahr = upper; fahr >= lower; fahr = fahr - step){
    //     celsius = (fahr - 32) * 5 / 9;
    //     printf("%10.2f\t%7.2f\n", fahr, celsius);
    // }

    // while (fahr <= upper)
    // {
    //     //Conversion de degrés F à C
    //     celsius = (fahr - 32) * 5 / 9;
    //     //"%d" est un descripteur de format pour dire "imprimer un entier"
    //     //"%f" est                                    "imprimer un float"
    //     // %x.yf x : largeur totale minimum, y : nombre de chiffres apres virgule
    //     printf("%10.2f\t%7.2f\n", fahr, celsius);
    //     fahr = fahr + step;
    // }
    //Quelle est la valeur de 'fahr'?
    //printf("fahr = %d\n", fahr);

    return 0;
}