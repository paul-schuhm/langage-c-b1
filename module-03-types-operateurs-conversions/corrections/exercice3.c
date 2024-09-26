#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Donner 3 nombres entiers :");
    // scanf permet de saisir plusieurs inputs d'un seul coup.
    scanf("%d%d%d", &a, &b, &c);
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    // Avec 3 valeurs, il y a 6 combinaisons possibles

    // Si a est le plus grand : soit b >= c ou c >= b
    // Si b est le plus grand : soit a >= c ou c >= a
    // Si c est le plus grand : soit b >= c ou b >= a

    // Si a est le plus grand
    if (a > b && a > c)
    {
        if (b > c)
            printf("%d %d %d", a, b, c);
        else
            printf("%d %d %d", a, c, b);
    }
    // Si b est le plus grand
    else if (b > a && b > c)
    {
        if (a > c)
            printf("%d %d %d", b, a, c);
        else
            printf("%d %d %d", b, c, a);
    }
    // Si c est le plus grand
    else
    {
        if (a > b)
            printf("%d %d %d", c, a, b);
        else
            printf("%d %d %d", c, b, a);
    }

    return 0;
}
