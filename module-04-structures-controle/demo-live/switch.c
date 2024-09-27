#include <stdio.h>

int main()
{

    int n = 0;

    // n peut être n'importe quelle expression
    switch (n)
    {

    case 0:
        printf("case 0: ");
        printf("L'expression est évaluée à 0\n");
        break;
    case 1:
        printf("case 1: ");
        printf("L'expression est évaluée à 1\n");
        break;

    default:
        printf("Aucun case trouvé. case par défaut\n");
    }

    printf("Prochaine instruction après le switch\n");
}