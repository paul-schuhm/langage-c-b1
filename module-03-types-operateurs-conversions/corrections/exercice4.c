#include <stdio.h>

int main(){


    //Pour échapper un caractère spécial (qu'il ne soit pas interprété), il faut utiliser le backslash
    //Pour afficher le caractère '%' il faut le doubler '%%'
    printf("This (\") is a quote, this %% is a percent and this (\\) is a backslash.\n");

    //Tip: il est possible de paramétrer la largeur du spécificateur de format avec le caractère '*'
    //et en passant la valeur de la largeur en argument de printf
    int width = 10;
    printf("[%*s]\n", width, "Foo");
    return 0;
}