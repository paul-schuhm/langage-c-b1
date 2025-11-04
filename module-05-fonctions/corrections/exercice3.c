#include <stdio.h>

/*
   Affiche le nombre de fois où elle a été appelée la 1er, 10eme, 
   100eme, 1000eme, etc. fois (a toute les puissance de 10)
 */
void f(void);

void f(void){
	static long int counter = 0;
	static long int nprint = 1;
	counter++;

	if( counter % nprint == 0){
		printf("***appel %ld fois***\n", counter);
		nprint *= 10;
	}

}

int main(){

	for(int i = 0; i < 1e6; i++)
		f();

	return 0;
}
