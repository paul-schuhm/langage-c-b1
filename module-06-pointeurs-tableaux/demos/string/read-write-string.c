#include<stdio.h>

#define LGMAX 24

int main(){
	char last_name[25], first_name[25], city[25];
	printf("Quelle est votre ville :");
	//stdin : fichier "entrée standard", par défaut le clavier
	//fgets a pour seul délimiteur nouvelle ligne (\n) et pas l'espace
	fgets(city, LGMAX, stdin);
	printf("Quelle votre prénom et nom : ");
//Attention, scanf a pour délimiteur l'espace. Il faut donc deux variables
//pour stocker la saisie où le prénom et nom sont séparés par un espace
	scanf("%s %s", first_name, last_name);
	printf("Bonjour cher %s %s qui habitez à %s\n",first_name, last_name, city);
}
