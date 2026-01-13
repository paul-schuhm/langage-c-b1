#include "stdio.h"
#include "stdlib.h"
#include "time.h"

//Introduit bases pour générer et manipuler des nombres aléatoires.

#define N 50

/*Genere un nombre aléatoire compris entre min et max (inclus).*/
int random_int(int min, int max){
	//max DOIT etre supérieur ou égal à min.
	if(max < min){
		exit(EXIT_FAILURE);
	}
	int r = min + rand() % (max - min + 1);
	return r;
}

/*Simule un lancer de dé à 6 faces*/
int d6(){
 return random_int(1, 6);
}

/*Simule un lancer de dé à 20 faces*/
int d20(){
 return random_int(1, 20);
}

/*Simule un lancer de pièce*/
int d2(){
	return random_int(0, 1);
}


//Ecrire une fonction fill_random qui prend en argument
//un tableau et le remplit de valeurs aléatoires 0 ou 1.



int main(){

	//Initialise générateur aléatoire
	//unsigned int seed = 101 ;
	//Utiliser timestamp UNIX pour obtenir une seed différente à chaque
        //nouvelle execution du programme.
	srand( (unsigned int) time(NULL));

	//Fonction de base 'rand()'
	for(int i = 0 ;i < N; i++){
		printf("%d ", d6()); 
	} 
}
