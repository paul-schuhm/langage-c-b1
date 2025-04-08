#include <stdio.h>
#include <string.h>

#define MAX 31 // 30 caractères + '\0'

int main()
{
    char word[MAX];
    int i, len, is_palindrome = 1;

    printf("entrez un mot (max 30 caractères) : ");
    scanf("%30s", word); // empêche le dépassement de tampon

    len = strlen(word);

    printf("mot inversé : ");
    for (i = len - 1; i >= 0; i--)
        putchar(word[i]);
    putchar('\n');

    //Solution par symetrie
    for (i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("le mot %s est un palindrome.\n", word);

    return 0;
}