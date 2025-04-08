#include<stdio.h>

//See https://beej.us/guide/bgc/html/split/file-inputoutput.html#file-inputoutput

int main(){

	//Pointeur vers qqchose qui represente un fichier
	FILE *fp;
	//ouvrir le fichier en lecture, retourne l'adresse du fichier (zone mémoire)
	fp = fopen("file.txt", "r");
	int c;
	while((c = fgetc(fp)) != EOF)
		printf("%c",c);
	//Toujours fermer le fichier
	fclose(fp);
}
