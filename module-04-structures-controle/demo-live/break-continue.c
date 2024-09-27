#include <stdio.h>

int main()
{

    //Illustration de continue (passer à l'itération suivante)
    // Afficher que les nombres pairs
     for (int i = 0; i <= 10; i++)
     {

        //Si impair, passe à l'itération suivante
        if (i % 2 != 0)
            continue;

        printf("%d\n", i);
    }
    // Illustration de break : mettre fin à la boucle ou sortir du bloc switch

    // Objectif : Répéter les instructions 10 fois
    int c = 0;
    // Boucle infinie
    while (1)
    {
        printf("%d\n", c);
        if (c == 10)
            break; // Interrompre la boucle

        c++;
    }

    return 0;
}