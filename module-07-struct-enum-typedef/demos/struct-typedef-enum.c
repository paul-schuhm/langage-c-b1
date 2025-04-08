#include<stdio.h>

//On peut définir des types custom (alias de type)
//typedef [type à aliaser] [label]
typedef int vector[3];
vector v, w;
typedef int * ptr;
ptr a, b;

struct person{
	char fname[25];
	char lname[25];
	//heures de travail chaque jour du mois
	float working_hours[31];
};

//Enumeration : alias sur des valeurs entières. Type scalaire
enum color {yellow, red, green};

void print_person(struct person *p);

void print_person(struct person *p){
	printf("Prénom : %s\n", p->fname);
	printf("Nom : %s\n", p->lname);
	for(int i = 0; i < 31; i++)
		printf("Jour %d - Heures travaillées : %.1f\n",i, p->working_hours[i]);
}


int main(){
	//Déclarer une variable de type struct person
	struct person jmichel = {"Jean Michel", "Bernard", {0}};
	print_person(&jmichel);


	enum color c1, c2;
	c1 = yellow;
	c2 = red;
	printf("c1=%d\n",c1);
	printf("c2=%d\n",c2);

}
