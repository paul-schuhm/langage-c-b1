#include <stdio.h>


/*affiche un message*/
void f1(void);
/*affiche un message n fois*/
void f2(int);
/*affiche un message n fois*/
int f3(int);


void f1(void){
	printf("hello\n");
}


void f2(int n){

	for(int i = 0; i < n; i++){
		printf("hello");
		if(i < n - 1)
			printf(" ");
	}
	printf("\n");
}

int f3(int n){
	f2(n);
	return 0;
}


int main(){

	f1();
	f2(5);
	f3(3);

	return 0;
}
