#include <stdio.h>

int main()
{
    int x, y;

    printf("Donner 2 nombres entiers :");
    // scanf permet de saisir plusieurs inputs d'un seul coup.
    scanf("%d%d", &x, &y);

    if(x > y){
        printf("%d est plus grand que %d\n", x, y);
    }else if (x == y){
        printf("%d est égal à %d\n", x, y);
    }else{
        printf("%d est plus grand que %d\n", y, x);
    }

    return 0;
}