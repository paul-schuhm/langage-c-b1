#include<string.h>
#include<stdio.h>

int main(){

	//char ch1[50] = "bonjour";
	//Attention a prevoir assez de place !
	char ch1[8] = "bonjour";
	char ch2[50] = "madame";
	//provoque un débordement mémoire, donc le comportement est toujours indéfini.
	//ajoute 'madame\0' a la chaine
	strcat(ch1, ch2);
	//print jusqu'au caractère \0 (meme si ca déborde la mémoire initiale de ch1 !)
	//C'est ce qu'on appelle un 'buffer overflow' et ca crée des failles car on 
	//écrit dans de la mémoire contigue qui peut être utilisée ailleurs !
	//ca peut marcher mais ca peut crasher !
	printf("%s",ch1);
	printf("%d",(int)strlen(ch1));

	return 0;
}
