#include <stdio.h>

int main()
{

    int i, n, sum;

    sum = 0;

    // Programme de départ avec for

    printf("Programme avec l'instruction for\n");
    for (i = 0; i < 4; i++)
    {
        printf("Donner un nombre entier: ");
        scanf("%d", &n);
        sum += n;
    }

    printf("Somme : %d\n", sum);


    // Même programme avec while


    printf("Programme avec l'instruction while\n");

    sum = 0;
    i = 0;

    while (i < 4)
    {
        printf("Donner un nombre entier: ");
        scanf("%d", &n);
        sum += n;
        i++;
    }

    printf("Somme : %d\n", sum);

    // Même programme avec do..while


    printf("Programme avec l'instruction do..while\n");


    i = 0;
    sum = 0;

    do
    {
        printf("Donner un nombre entier: ");
        scanf("%d", &n);
        sum += n;
        i++;
    } while (i < 4);

    printf("Somme : %d\n", sum);

    return 0;
}