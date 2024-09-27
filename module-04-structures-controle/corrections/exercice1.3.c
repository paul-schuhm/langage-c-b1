#include <stdio.h>

int main()
{

    //Affiche un triangle de largeur n sur la sortie

    int n;

    printf("Nombre de lignes: ");
    scanf("%d", &n);

    // Si le nombre fourni n'est pas plus grand que zéro, on arrête le programme
    // en prévenant l'utilisateur
    if (n <= 0)
    {
        printf("Vous devez saisir un nombre positif non nul\n");
        return 0;
    }

    //Boucle sur le nombre de lignes
    for (int i = 1; i <= n; i++)
    {
        //Boucle sur le nombre d'astérisques à afficher
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        //Saut de ligne pour construire le triangle
        printf("\n");
    }

    return 0;
}
