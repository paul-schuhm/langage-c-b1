#include <stdio.h>

int main(){

    int width = 10;

    printf("This (\") is a quote, this (%) is a percent and this (\\) is a backslash.\n");
    printf("[%*s]\n", width, "Foo bar");
    return 0;
}