#include <stdio.h>

/*
 * Dans ce programme, la fonction foo est définie avant d'être utilisée.
 * Le compilateur la connait avant son appel (nom, type de retour, arguments et types des arguments).
 * Tout fonctionne correctement.
 *
 * Il faut bien penser à fournir la définition de foo AVANT qu elle ne soit appelée,
 * dans le même fichier. Ce sera une option assez limitante quand il s'agira de programmer
 * de manière modulaire : si je modifie foo je dois recompiler le programme principal (main)
 * avec.
 */

void foo(void){
	printf("foo\n");
}

int main(){
	foo();
	return 0;
}
