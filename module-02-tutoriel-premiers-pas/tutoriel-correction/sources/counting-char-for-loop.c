#include <stdio.h>
int main()
{
    int nc;
    
    for (nc = 0; getchar() != EOF; nc++)
        ;

    printf("Nombre de caractères : %d\n", nc);
    return 0;
}