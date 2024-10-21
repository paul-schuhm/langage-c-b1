#include <stdio.h>

//i est une variable globale, accessible à toutes les fonctions
//présentes dans le fichier
int i = 2;

//Erreur avec j : une variable globale est de classe d'allocation statique. Elle ne peut prendre
//pour valeur qu'une expression constante.
// int j = i;

void foo(void);
int main()
{
    // main peut accéder à i
    i = i + 1;
    // main ne peut accéder à x, car elle est déclarée après !
    // x = x + 1;
    //main peut accéder à foo
    foo();
}
//x est une variable globale, accessible à toutes les fonctions déclarées à la suite
//dans le fichier
float x = 7;
void foo(void)
{
    // foo peut accéder à i
    i = i + 2;
    // foo peut accéder à x
    x++;
    printf("i=%d et x=%f\n", i, x);
}