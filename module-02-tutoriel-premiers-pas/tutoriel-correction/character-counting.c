#include <stdio.h>

int main()
{

    //While version

    // int nc = 0;

    // while (getchar() != EOF)
    //     nc++;

    // printf("Nombre de caractères : %1d\n", nc);

    // For version
    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("Nombre de caractères : %.f\n", nc);

    return 0;
}