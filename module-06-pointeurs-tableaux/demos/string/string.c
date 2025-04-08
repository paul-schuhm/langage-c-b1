#include <stdio.h>

int main() {

  // Déclarer une chaine
  char *s = "bonjour";

  while (*s) {
    printf("%c", *s);
    s++;
  }

  // Equivalent
  // s1 est un pointeur constant, si je veux parcourir je dois créer un autre
  // pointeur
  char s1[20] = {'b', 'o', 'n', 'j', 'o', 'u', 'r'};
  char *p = s1;
  while (*p) {
    printf("%c", *p);
    p++;
  }

  // 	int day;
  // 	char * days[] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi",
  // "samedi", "dimanche"}; 	printf("donnez un entier entre 1 et 7:");
  // 	scanf("%d",&day);
  // //On utilise le code format '%s' et on passe l'adresse de la chaine
  // (pointeur) printf("Le jour de la semaine choisi est %s\n", days[day-1]);

  return 0;
}
