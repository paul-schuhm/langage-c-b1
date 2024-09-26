#include<stdio.h>

int main(){
    
    char c = 'a';
    printf("%d, %c\n", c, c);
    //Promotion numérique char --> int
    printf("Promotion numérique char -> int\n");
    int result = c + 1;
    //See https://www.ascii-code.com/fr
    printf("%d, %c\n", result, result);
    printf("%d, %d\n", sizeof(c), sizeof(result));

    float x = 5.2;
    int i = x;
    printf("Conversion par affectation avec dégradation de la valeur\n");
    printf("%d\n", i);
}