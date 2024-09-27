#include <stdio.h>

int main()
{

    float grade;
    int c = 0;
    float sum = 0;

    /*On peut saisir un nombre indéterminé de notes
      aussi on utilise ici une boucle infinie
    */
    while (1)
    {

        printf("note %d: ", c + 1);
        scanf("%f", &grade);

        //Une saisie de note négative met un terme à la saisie des notes
        if (grade < 0)
            break;

        sum += grade;
        c++;
    }
    
    printf("Moyenne : %.2f\n", sum / c);

    return 0;
}
