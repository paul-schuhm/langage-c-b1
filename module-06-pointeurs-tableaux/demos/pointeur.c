#include <stdio.h>

/*
 * Module 6 : Pointeurs et tableaux
 * See: https://beej.us/guide/bgc/html/split-wide/pointers.html#pointers
 */

void main(void){

	{
		//Définition d'un pointeur
		//
		//Un pointeur est une variable qui stocke une adresse. Une adresse est un
		//nombre et représente un emplacement mémoire (ie index en mémoire, adresse, location, emplacement)
		//Analogie: Imaginer une série de notes que vous avez prises. Sur une note on peut y inscrire un numéro
		//pour définir une sequence chronologique de notes par ex, ainsi.. que "des notes". 
		//Si vous écrivez sur une note le numéro d'une autre note, cette note est un pointeur !
		//
		//En C, l'opérateur "adresse de " address-of est l'esperluette "&"
		int i = 10;

		printf("La valeur de i est %d\n", i);
		//Ingorer le cast vers (void *)valeur pour l'instant.
		//Affiche l'adresse en base 16 (héxadécimale)
		//L'adresse est un pointeur vers i: le nombre indique où trouver la valeur de i en mémoire
		printf("L'adresse de i est %p\n", (void *)&i);

	}

	{
		//Types de pointeur et déférencement
		//
		//Maintenant que l'on sait obtenir un pointeur (adresse), on va le stocker dans une variable
		//pour s'en servir plus tard

		//Les pointeurs ont un type : le type de la variable pointé. int *p est un "pointeur sur int"

		int  i = 10;
		int *p; //p est un pointeur sur un entier non initialisé, donc il pointe sur n'importe quoi
		p=&i; //p est assignée à l'adresse de i, on dit que p pointe sur i

		//On peut modifier la valeur de i en modifiant i, ou en passant par le pointeur p. On parle de déférencement
		//*p dit "utilise ce qui est pointé par p"
		*p = 20;
		printf("i est égal à %d\n",i);
		printf("i est égal à %d\n",*p); //C'est la même chose que i !
						//
		//Pour cette opération de déférencement (lire la valeur stockée à l'adresse), le type du pointeur est indispensable !
	}


	{
		//L'intérêt des pointeurs: passage de pointeurs à des fonctions
		//
		//L'intérêt des pointeurs se revele quand on commence à les passer en argument de fonctions : passer des choses
		//plus complexes qu'une valeur en argument. Passage par copie: la valeur du pointeur est copiée. La fonction ne voit pas
		//la variable, mais elle peut déférencer le pointeur vers cette variable, et la manipuler ! On peut à présent
		//modifier une variable en dehors de la portée de la fonction !

		void increment(int *p){
			*p = *p + 1;
		}

		int i= 10;
		//j est un pointeur sur i
		int *j = &i;
		printf("i est égal à %d\n", i);
		printf("j est aussi égal à %d\n", *j);

		increment(j);
		printf("i est égal à %d\n", i);

		//Encore plus concis, sans passer par la variable j
		increment(&i);
		printf("i est égal à %d\n", i);

	}


	{
		//NULL pointer
		//Tout pointeur peut se voir assigné la valeur NULL, cela indique que le pointeur ne pointe sur rien
		int *p; //on ne sait pas sur quoi pointe p
		p=NULL; //p pointe sur rien. Indique qu'il n'a pas été intialisé
		//Ne pas déférencer un pointeur NULL ! Comportement indéfini
		//*p = 10;
	}
	{
		//Syntaxe
		//
		//L'opérateur * s'applique au nom de la variable pas au type
		//int a;
		//int b;
		//Peut s'écrire:
		//int a, b;
		//int a;
		//int *p;
		//Peut s'écrire:
		//int a, *p;
		//Ici, '*' s'applique à 'p' et non au type 'int'
		//Règle: '*' est appliqué devant le nom de chaque variable qui est de type pointeur
		//int *p, q; ne déclare par deux pointeurs : p est un pointeur vers int, q est un int
		//
		//Taille des pointeurs
		//
		int *p;
		//Size of 'int'
		printf("%u\n", sizeof(int));
		//Size of 'int *' 'pointeur sur int'
		printf("%u\n", sizeof(p));
		//Size of 'int' car *p est de type 'int', comme l'indique sa déclaration (int <--- *p)
		//Meme taile que sizeof(int)
		printf("%u\n", sizeof(*p));

	}



	return;
}
