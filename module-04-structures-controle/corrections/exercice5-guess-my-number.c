#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int max = 100;
    int randomNumber;
    int guess;
    int currentTime = time(NULL);
    //Initialisation du générateur de nombre aléatoires
    srand(currentTime);
    //Nombre aléatoire entre 0 et 100 [0:100[
    randomNumber = rand() % max;
    do
    {
        printf("Enter your guess (between 0 and %d): ", max);
        scanf("%d", &guess);

        if (guess > randomNumber)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < randomNumber)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the number\n");
        }

    } while (guess != randomNumber);
}
