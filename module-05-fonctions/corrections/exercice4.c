#include <stdio.h>

#define TVA_PERCENT 20

/*calcule le prix ttc*/
float price_with_taxes(float);

/*calcule le pourcentage de reduction*/
float discount_percent(float);

float price_with_taxes(float price_without_taxes){
    return price_without_taxes * (1 + TVA_PERCENT / 100.);
}

float discount_percent(float price_ttc){

    float discount;

    if(price_ttc > 5000){
        discount = 5;
    }else if (price_ttc > 2000){
        discount = 3;
    }else if (price_ttc > 1000){
        discount = 1;
    }else{
        discount = 0;
    }

    return discount / 100.;
}

int main(){

    float price_ht;
    float price_ttc;

    printf("Saisir le prix hors taxe: ");
    scanf("%f", &price_ht);

    price_ttc = price_with_taxes(price_ht);

    printf("prix ttc: %.2f\n", price_ttc);
    printf("remise: %.2f\n", price_ttc * discount_percent(price_ttc));
    printf("net à payer: %.2f\n", price_ttc * (1.0 - discount_percent(price_ttc)));

    return 0;
}
