#include<stdio.h>
#include<string.h>

#define LGMAX 133 //132 + 1
#define CHAR 'e'

int main(){

	char line[LGMAX];
	char * pos;
	int nb_char = 0;

	printf("fournir une phrase, appuyer sur return pour terminer la saisie : ");
	fgets(line, LGMAX, stdin);

	pos = line;

	//strchr retourne un pointeur vers la premiere occurence trouvée.
	//Si non trouvée, retourne un pointeur NULL (falsy)
	while((pos = strchr(pos, CHAR))){
		nb_char++;
		//On inspecte la chaine a partir du caractère suivant jusqu'à la fin.
		pos++;
	}

	printf("La chaine\n%s\ncontient %d caractère(s) %c\n", line, nb_char, CHAR);

	return 0;
}
