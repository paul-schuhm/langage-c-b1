#include <stdio.h>
#include <string.h>

/* Fonctions de manipulation de texte :

   - strlen : compte le nombre de bytes
   - strcat, strncat
   - strcmp, strncmp
   - strcpy, strncpy. Attention, Undefined Behavior si copie concerne des objets qui se recouvrent en mémoire ! Utiliser memmove() a la place
   - strchr(char *, char) / strrchr
   - strstr(char*, char*)
 */


#define LINE_W 120
int main(){

  char buffer[LINE_W + 1];

  printf("Fournir un texte: ");
  fgets(buffer, LINE_W + 1, stdin);

  char* p = buffer;
  size_t count_e = 0;
  while(*p != '\0'){
    if(*p++ == 'e')
      count_e++; 
  }
  printf("Il y a %zu lettres e dans le texte\n", count_e); 
  printf("Suppression de tous les caractères 'e'\n");

  char* pos_e = buffer;
  while( (pos_e =strchr(pos_e, 'e')) != NULL) {
    memmove(pos_e, pos_e + 1, strlen(pos_e));
  }

  puts(buffer);


  return 0;

}
