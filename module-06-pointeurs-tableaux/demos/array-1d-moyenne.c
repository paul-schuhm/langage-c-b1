#include <stdio.h>

// Nombres de notes
#define N 10

int main()
{
    int i, sum, nb;
    float mean;
    // int grades[N];
    //1)Initialiser le tableau via la saisie utilisateur
    // for (i = 0; i < N; i++)
    // {
    //     printf("Donnez la note numéro %d : ", i + 1);
    //     scanf("%d", &grades[i]);
    // }

    //2)Initialiser le tableau avec des valeurs prédéfinies
    //En C, un tableau ne peut être initialisé avec des accolades qu’au moment de sa déclaration.
    int grades[N] = { 12, 13, 15, 0, 5, 9, 18, 20, 12, 11};

    for (i = 0; i < N; i++)
        sum += grades[i];

    mean = sum / N;

    printf("Moyenne de la classe : %f\n", mean);

    for (i = 0; i < N; i++)
    {
        if (grades[i] > mean)
            nb++;
    }

    printf("%d élèves ont plus de la moyenne\n", nb);

    return 0;
}