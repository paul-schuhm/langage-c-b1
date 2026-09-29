#include <stdio.h>


int main()
{
    int nc = 0;

    while (getchar() != EOF){
        nc++;
    }

    printf("Nombre de caractères : %d\n", nc);
    return 0;
}