#include <stdio.h>

/**
 * Depuis le début du cours, on utilie printf sans
 * faire de déclaration !! On devrait avoir une erreur (ou un warning)
 * "implicit declaration" comme on l'a vu. Pourquoi ce n'est pas le cas ?
 * Car on a la déclaration grace à la directive #include <stdio.h>. Ce fichier
 * contient la déclartion de printf ! Donc, on est bons : la fonction printf est
 * bien déclarée avant d'être utilisée.
 *
 * Remarque : essayer de commenter l'include de stdio.h et compiler le programme
 * pour voir le warning/erreur "implicit declaration"
 */

int main(){
	printf("hello, world\n");
	return 0;
}
