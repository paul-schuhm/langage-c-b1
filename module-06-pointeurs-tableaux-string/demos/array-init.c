#include <stdio.h>


/*
 * Démonstration des différente choses à connaitre sur l'initialisation de tableaux
 * en fonction de leur classe d'initialisation et de leur initialisation absente ou partielle.
 */

#define N 50

/*Tableau de classe d'allocation statique (var globale)
 * Tous ses éléments sont initialisés à 0 par défaut
 */
int t[N];

void main(void){

	/*
	 * Tableau de classe d'allocation automatique (var locale)
	 * Tous ses éléments ont une valeur indéfinie (aléatoire), garbage
	 * Dans certains envs, le compilateur init à 0 lui meme, mais rien n'est garanti !
	 */
	int q[N];

	/*Tableau de classe d'allocation statique (var static)
	 * Tous ses éléments sont initialisés à 0 par défaut
	 */
	static int r[N];

	/**
	 * Tableau de classe d'allocation auto (var locale)
	 * Mais partiellement initialisée (premier element à zero). Garantie que
	 * les autres éléments sont init à 0 également.
	 */
	int s[N]={0};

	for(int i = 0 ; i < N; i++)
		printf("%d", t[i]);
	printf("\n");
	for(int i = 0 ; i < N; i++)
		printf("%d", q[i]);
	printf("\n");
	for(int i = 0 ; i < N; i++)
		printf("%d", r[i]);
	printf("\n");
	for(int i = 0 ; i < N; i++)
		printf("%d", s[i]);
	printf("\n");
	return ;
}
