#include <stdio.h>

int main()
{

    //Version avec erreur :
    //c = getchar() != EOF est évalué comme c = (getchar() != EOF) car '!=' a une plus grande précédence que '='
    //Ainsi, il en résulte que c = 0 ou 1. Or 0 et 1 sont des codes ASCII qui n'affichent rien, d'où le résultat et le bug.
    // int c;
    // while (c = getchar() != EOF)
    // {
    //     putchar(c);
    // }

    //Version corrigée : avec les parenthèses, c = getchar() est évalué avant et le résultat est comparé à EOF, comme désiré
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
}