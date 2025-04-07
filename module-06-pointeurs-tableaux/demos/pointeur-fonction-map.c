#include <stdio.h>

/**
 * Démo de l'usage de pointeur sur des fonctions. Possibilité de passer une fonction
 * en argument à une autre fonction. Ici on implémente la fonctionnalité de 'map'
 * appliquer une fonction de manière dynamique à chaque élément d'une collection
 * (Modification sur place du tableau ici)
 */

void map(int t[], int n, int (*f)(int));
int square(int);
int abs(int);

int square(int x)
{
    return x * x;
}
int abs(int x)
{
    if (x < 0)
        return -x;
    else
        return x;
}
void map(int t[], int n, int (*f)(int))
{
    for (int i = 0; i < n; i++)
        t[i] = (*f)(t[i]);
}

int main()
{
    int t[] = {1, -2, 3, 12, -5};
    map(t, 5, square);
    for (int i = 0; i < 5; i++)
        printf("%d\t", *(t + i));
    printf("\n");

    int t2[] = {1, -2, 3, 12, -5};
    map(t2, 5, abs);
    for (int i = 0; i < 5; i++)
        printf("%d\t", *(t2 + i));
    printf("\n");
}