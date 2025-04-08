#include <stdio.h>

int main(){

	char s[20] = {'b','o','n','j','o','u','r'};

	char *p = s;

	//Syntaxe pointeur
	while(*p){
		printf("%c",*p);
		p++;
	}

	printf("\n");

	//Syntaxe des tableaux (ne pas utiliser strlen pour définir la taille de la chaine !=
	for(int i = 0; i < 20 && s[i] != '\0'; i++)
		printf("%c",s[i]);

	return 0;
}
