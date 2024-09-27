#include <stdio.h>

int main()
{

	int n = 6;
	// Le nieme terme de la suite de Fibonacci
	int un, a, tmp;

	// Par définition de la suite, n doit être positif
	if (n < 0)
		return 0;

	if (n == 0){

		// Par définition
		un = 0;
	}
	else if (n == 1)
	{
		// Par définition
		un = 1;
	}
	else
	{
		a = 0;
		un = 1;
		for (int i = 2; i <= n; i++)
		{
			tmp = a + un;
			a = un;
			un = tmp;
		}
	}

	printf("Le %d-ème terme de la suite de Fibonacci vaut %d\n", n, un);

	return 0;
}
