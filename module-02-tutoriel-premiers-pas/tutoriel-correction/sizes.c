#include <stdio.h>

int main(){


    int i;
    long j;
    float k;
    double l;
    char c;

    //Les tailles (en byte) peuvent changer d'une machine à l'autre.
    //Seules les tailles minimum sont garanties par le langage.
    printf("size of int %d\n", sizeof(i));
    printf("size of long %d\n", sizeof(j));
    printf("size of float %d\n", sizeof(k));
    printf("size of int %d\n", sizeof(i));
    printf("size of char %d\n", sizeof(c));

    return 0;
}

