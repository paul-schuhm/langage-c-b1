#include<stdio.h>
#include<string.h>

#define LGMAX 31

int main(){

	//N'initialise pas une chaine vide. Reserve mémoire et du gargage dedans !
	char line[LGMAX];
	//Initialise une chaine vide si besoin
	//char line[LGMAX] = {0};

	printf("tapez une phrase, pressez return pour terminer la saisie : ");
	fgets(line, LGMAX, stdin);
	//Si user tape 'hello\n', la chaine line contriendra 'hello\n\0'

	// Supprimer le caractère \n, s'il est présent (c'est le cas avec fgets, il ne le consomme pas)
	line[strcspn(line, "\n")] = '\0';

	//Renvoie la taille de la chaine 
	//strlen() ne compte pas les bytes alloués mais la longueur réelle de la chaîne, c'est-à-dire le nombre de caractères avant le caractère nul (\0), qui est ajouté automatiquement par fgets() à la fin de la chaîne.
	int len = strlen(line);

	//Inverser la chaine
	for(int i = len - 1 ; i >= 0 ; i--)
		printf("%c", line[i]);
	//Palindrome
	//Méthode par symétrie

    //On assume que c'est un palindrome par défaut.
	int is_palindrome = 1;

	for(int i = 0; i < len/2; i++){
		if(line[i] != line[len - 1 - i]){
			//Manque de symetrie autour du centre : pas un palindrome !
			is_palindrome = 0;
			//Je peux arrêter tout de suite la boucle.
			break;
		}
	}

	printf("\n");

	if(is_palindrome)
		printf("%s est un palindrome !\n", line);

	printf("\n");
}
