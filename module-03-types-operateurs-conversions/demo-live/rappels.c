#include <stdio.h>

int main(){

	/*
	   0 => "faux"
	   different de 0 (dont 1) => "vrai"
	 */
	printf("%f\n", 1 / 2);
        printf("%d\n", 20 < 30 && 5 < 12);
        printf("%d\n", 10 && 11);

	int i = 0;
        i = i + 1;
	printf("i=%d\n", i);
	i++;
	printf("i=%d\n", i);
	++i;
	printf("i=%d\n", i);

	i = 0;
	printf("i += 20 vaut %d\n", i *= 2);
	i = 0;
	printf("++i=%d\n", ++i);

	for(int j = 1 ; j < 100; j *= 2)
		printf("j=%d\n",j);



//Conversion
	float x = 2.5;
	int k = x;
	printf("k=%d\n", k);

	return 0;
}
