#include <stdio.h>

void sum_matrices(double *a, double *b, double *c, int n, int p);

void sum_matrices(double *a, double *b, double *c, int n, int p)
{
    for (int i = 0; i < n * p; i++)
        *(c + i) = *(a + i) + *(b + i);
}

int main()
{
    double a[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    double b[3][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
    double c[3][3];

    sum_matrices(a[0], b[0], c[0], 3, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("c[%d][%d] = %.2f", i, j, c[i][j]);
        }
    }
    printf("\n");
}