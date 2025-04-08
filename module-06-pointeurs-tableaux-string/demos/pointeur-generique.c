#include <stdio.h>

/**
 * Démo de l'usage de pointeur générique (void *)
 * pour créer des fonctions génériques
 * (peuvent travailler avec des objets non connus à l'avance)
 */

// Remet à zéro une zone mémoire d'une certaine taille
void raz(void *, int);

void raz(void *adr, int n)
{
    int i;
    char *ad = adr;
    for (i = 0; i < n; i++, ad++)
        *ad = 0;
}

int main()
{

    int t[3] = {1, 2, 3};
    double s[] = {1.2, -5};
    double z = 133.55;

    raz(t, 3 * sizeof(int));

    for (int i = 0; i < 3; i++)
        printf("%d\n", t[i]);

    raz(s, 2 * sizeof(double));

    for (int i = 0; i < 2; i++)
        printf("%f\n", s[i]);

    raz(&z, sizeof(double));
    printf("z=%f\n", z);

    return 0;
}