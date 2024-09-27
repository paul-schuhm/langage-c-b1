#include <stdio.h>

int main(){

    int i, n, sum;

    sum = 0;

    for(i = 0; i < 4; i++){
        printf("Donner un nombre entier: ");
        scanf("%d", &n);
        sum += n;
    }

    printf("Somme : %d\n", sum);

    return 0;
}