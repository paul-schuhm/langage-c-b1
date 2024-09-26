#include <stdio.h>

int main()
{

    int n = 10, p = 4;
    long q = 2;
    float x = 1.75;

    printf("Exercice 1. 1\n");

    // 1. n + q : long 12
    // Pour s'en convaincre, on affiche la taille en mémoire (bytes)
    printf("n + q : long 12 - Taille en mémoire : %ld\n", sizeof(n + q));

    // 2. n + x : float 11.75
    printf("n + x : float 11.75 - Taille en mémoire : %ld\n", sizeof(n + x));

    // 3. n % p + q
    //Pour afficher '%' tel quel sans qu'il soit interprété, il faut écrire '%%'
    printf("n %% p + q : long 4 - Taille en mémoire : %ld\n", sizeof(n % p + q));

    // 4. n < p
    printf("n < p : int 0 (faux) - Taille en mémoire : %ld\n", sizeof(n < p));

    // 5. n >=p
    printf("n < p : int 1 (vrai) - Taille en mémoire : %ld\n", sizeof(n >= p));

    // 6. q + 3 * (n > p)
    printf("q + 3 * (n > p) : long 5 - Taille en mémoire : %ld\n", sizeof(q + 3 * (n > p)));

    // 7. q && n
    printf("q && n : int 1 (vrai) - Taille en mémoire : %ld\n", sizeof(q && n));

    // 8. (q-2) && (n-10)
    printf("(q-2) && (n-10) : int 0 (faux) - Taille en mémoire : %ld\n", sizeof((q - 2) && (n - 10)));

    // 9.  x * (q == 2)
    printf("x * (q == 2) : float 1.75 - Taille en mémoire : %ld\n", sizeof(x * (q == 2)));

    // 10. x * (q = 5)
    printf("x * (q = 5) : float 8.75 - Taille en mémoire : %ld\n", sizeof(x * (q = 5)));

    printf("Exercice 1. 2\n");

    // z = (a > b ? a : b) + (a <= b ? a : b);

    // Si a > b, alors z est égal à a + b
    // Si a <=b, alors z est égal b + a
    // Dans les deux cas, z est égal à a + b
    // Donc z = a + b

    int z;
    //Sur un exemple
    int a = 1;
    int b = 1;
    //On vérifie que c'est bien la même valeur
    if ((z = (a > b ? a : b) + (a <= b ? a : b)) == (z = a + b))
        printf("(z = (a > b ? a : b) + (a <= b ? a : b) ) est égal à (z = a + b)\n");

    printf("Exercice 1. 3\n");

    //Par exemple
    n = 0;
    int exp = n < 0 ? -1 : ((n == 0) ? 0 : 1);
    printf("exp=%d\n", exp);

}