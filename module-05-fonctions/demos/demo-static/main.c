#include <stdio.h>

void f(void);

void f(void){
	//n est une variable statique. Sa valeur est initialisée une seule fois
	//et son emplacement mémoire est défini à la compilation. Il demeure le même
	//durant toute l'execution du programme.
	static int n = 3;
	n++;
	printf("n=%d\n",n);
}

int main(){
	f();
	f();
	f();
	return 0;
}

