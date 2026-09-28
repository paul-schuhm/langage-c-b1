
#include <stdio.h>

// Ce programme imprime un triangle inversé
// Boucles 'for' et if/else block

int main(){

    // Compter de 10 à 0 (inclus)
    // Opérateurs de comparaison: >, <, >=, <=
    for(int i = 10; i > 0; i--){
        // Imprimer "i" caractères
        for(int col = 0; col < i; col++){
            //Si i est paire
            if(i % 2 == 0){
                //On imprime ce motif
                printf("*");
            }else{
                //Sinon
                printf(".");
            }
        }
        //Fin de la ligne
        printf("\n");
    }
}

