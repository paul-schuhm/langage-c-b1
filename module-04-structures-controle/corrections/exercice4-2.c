#include <stdio.h>
 
int main()
{
    int num1, num2;
 
    printf("Saisir deux nombres: ");
    scanf("%d%d", &num1, &num2);
 
    switch(num1 > num2)
    {   
        case 0: 
            printf("%d est le maximum", num2);
            break;
 
        case 1: 
            printf("%d est le maximum", num1);
            break;
    }
 
    return 0;
}
