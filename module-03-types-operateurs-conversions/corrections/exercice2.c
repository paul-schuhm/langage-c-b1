#include <stdio.h>

int main()
{
    int n;
    printf("Donner un nombre entier :");
    scanf("%d", &n);

    //Pour déterminer si un entier est pair ou impair
    //on utilise la définition d'un nombre pair :
    // Si le reste de la division par 2 est nul, alors le nombre est pair, sinon il est impair.

    n % 2 == 0 ? printf("%d est pair\n", n) : printf("%d est impair\n", n);

    return 0;
}
