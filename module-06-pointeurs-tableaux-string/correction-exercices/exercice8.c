#include <stdio.h>
#include <string.h>
#define CAR 'e'
#define LGMAX 132

/*
Écrire un programme qui supprime toutes les lettres “e” (minuscules) d’un texte de moins d’une
ligne (supposée ne pas dépasser 132 caractères) fourni au clavier. Le texte ainsi modifié sera
créé, en mémoire, à la place de l’ancien.
*/

/*
Ce programme lit une ligne de texte, puis supprime toutes les occurrences du caractère CAR, en décalant le reste de la chaîne vers la gauche à chaque fois.
*/

int main()
{

    char texte[LGMAX + 1];
    char *adr;
    printf("donner un texte terminé par return\n");
    fgets(texte, LGMAX + 1, stdin);
    adr = texte;
    while (adr = strchr(adr, CAR))
    {
        // Copie la sous-chaîne qui commence à l'adresse suivante (adr + 1) à la place de l’occurrence de CAR trouvée en adr.
        strcpy(adr, adr + 1);
    }
    printf("voici votre texte privé de ses caractères %c\n", CAR);
    puts(texte);
}