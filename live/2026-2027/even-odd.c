
#include <stdio.h>

int main(){

    //Par définition, un nombre pair est un nombre dans le résultat du % 2 est égal à 0
    for(int i = 0; i < 30; i++){
        if( i % 2 == 0){
            printf("%2d est paire !\n", i);
        }else{
            printf("%2d est impaire !\n", i);
        }
    }
}

