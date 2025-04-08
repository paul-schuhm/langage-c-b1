#include <stdio.h>

// taille de notre buffer
#define LG 80

// Questionner l'user jusqu'à avoir une réponse correcte : on attend un entier
// et un caractère. On attend 2 inputs corrects.

int main() {

  int n_correct_values;
  // Emplacements ou stocker les saisies
  int u;
  char c;
  // buffer
  char line[LG];

  do {

    printf("saisir un entier et un caractère. Appuyer sur entrée pour terminer "
           "la saisie: ");

    // 1. Recupere l'input complet(chaine) avec fgets
    fgets(line, LG - 1, stdin);

    // 2. Decode la saisie avec un format pour valider les inputs
    //Remarque : essayer avec "55.5 a" : ca va matcher u => 55 et c => .
    //Pour corriger cela il faut faire une verif explicite avec strchr de la présence
    //d'un '.' ou alors accepter un float que l'on cast ensuite en int.
    n_correct_values = sscanf(line, "%d %c", &u, &c);

  } while (n_correct_values < 2);

  printf("merci pour %d et %c\n", u, c);
}
