#include <stdio.h>

int main()
{

    // Un tableau à 2 dimensions
    int t2d[3][5];
    // Un tableau à 3 dimensions
    int t3d[3][5][6];

    // Initialisation complète avec liste d'initialisation {,}
    // On ne peut init avec une liste d’initialisation qu'au moment de la déclaration

    int tab1[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    int tab2[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("tab1[%d][%d]=%d\t tab2[%d][%d]=%d\n", i, j, tab1[i][j], i, j, tab2[i][j]);
        }
    }

    // Initialisation partielle

    int tab3[3][4] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("tab1[%d][%d]=%d\n", i, j, tab3[i][j]);
        }
    }



    int tab[2][3];

    //Accéder à l'élément i,j via pointeur sur un tab[m][n]
    // *(tab[0] + i * n + j)
    //Acceder à l'élement tab[1][2] via pointeur
    *(tab[0] + 1 * 3 + 2) = 1;
    //Non car tab est de type int [2] * (pointeur sur un tableau de 2 elements) et non int * !
    *(tab + 1 * 3 + 2) = 1;

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            printf("tab[%d][%d]=%d\n",i ,j, tab[i][j]);
    

    return 0;
}
