#include <stdio.h>

/*Le programme affiche "5 3"*/

int n = 5;
int main(){
	void f(int p);
	int n=3;
	f(n);
	return 0;
}
void f(int p){
	printf("%d %d", n, p);
}
