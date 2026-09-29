#include <stdio.h>


int main(){

    int quantity;
    //Demander à l'utilisateur de saisir un nombre que l'on va stocker dans quantity
    printf("Donne moi un nombre: ");

    //Placer l'input sous forme d'entier à l'emplacement (addresse, opérateur &) de quantity
    scanf("%d", &quantity);

    printf("quantity = %d", quantity);

}