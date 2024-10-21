#include <stdio.h>

/*
 * Dans ce programme, la fonction foo est utilisée avant d'être définie.
 * Ce programme va compiler et s'executer mais sa compilation va lever
 * un warning "implicit declaration" (qui peut causer une erreur selon
 * la version de votre compilateur).
 *
 * Remarque: La déclaration implicite était autorisée dans la première version
 * standard du C (C89) mais n'est plus permise aujourd'hui (C99 et autres).
 *
 * Pourquoi ? Lorsque le compilateur analyse le programme, il rencontre
 * l'appel à foo AVANT sa définition, il n'y donc aucune garantie à ce 
 * moment là qu'elle existe et qu'elle soit bien utilisée (arguments corrects). 
 * D'où le warning "implicit declaration", ce
 * qui indique que le compilateur utilise une declaration par défaut
 * de cette fonction.
 *
 * Le programme est tout de même executable car la définition (implémentation)
 * de la fonction est fournie ensuite, apres celle de la fonction main. Cependant,
 * c'est DANGEREUX car le compilateur ne peut faire aucune vérification a l'appel
 * de la fonction (sur le nb et le type des arguments) !! C'est donc risqué !
 *
 *
 * Remarque : essayer d'executer foo en lui passant des arguments, par ex foo(1,2).
 * Cela va compiler (avec la version C89) et s'executer alors qu'on ne respecte pas le prototype de foo !
 * La fonction peut donc éventuellement crasher le programme car elle est potentiellement mal utilisée.
 */
int main(){
	foo();
	return 0;
}
void foo(void){
	printf("foo\n");
}
