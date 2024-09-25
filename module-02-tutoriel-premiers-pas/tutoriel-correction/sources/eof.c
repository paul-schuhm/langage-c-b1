#include <stdio.h>

int main()
{

    // Vérifier que getchar() != EOF est égal à 0 ou à 1
    // C'est donc une valeur logique/booléenne

    int result;

    printf("Tapez un caractère puis appuyez sur Entrée (ou Ctrl+D pour EOF):\n");

    // Afficher le résultat de l'expression (0 ou 1)
    printf("Le résultat de getchar() != EOF est: %d\n", getchar() != EOF);

    // Affiche la valeur de EOF
    printf("EOF=%d\n", EOF);
    return 0;
}