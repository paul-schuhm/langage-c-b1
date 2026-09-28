#include <stdio.h>

int main(){
    //Attention, si l'on divise deux entiers on effecture une division entière !
    printf("9/5 = %f\n", 9/5);
    // Si une des deux opérandes au moins est un float, l'autre entier sera converti et on effectue
    // bien une division décimale
    printf("9.0/5 = %f\n", 9./5);
}