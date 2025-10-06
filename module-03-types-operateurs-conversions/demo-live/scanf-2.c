#include <stdio.h>


int main(){

	int n;
	char c;
	printf("Saisir un entier et un caractère:");
	//Je peux saisir plusieurs inputs en un seul appel à scanf
	scanf("%d %c", &n, &c);
	printf("n=%d c=%c\n", n, c);
	return 0;
}
