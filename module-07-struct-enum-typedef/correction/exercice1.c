#include<stdio.h>

#define N 3

struct point{
	int number;
	float x;
	float y;
};

void print_point(struct point*);
void read_point(struct point*);


static int number;

void read_point(struct point* p){

	number++;
	float x, y ;

	printf("Veuillez saisir un nouveau point x y :");
	scanf("%f %f",&x, &y);
	p->number = number;
	p->x = x;
	p->y = y;
}

void print_point(struct point *p){
	printf("Point %d : x=%.2f y=%.2f\n", p->number, p->x, p->y);
}

int main(){
	struct point points[N];

	for(int i = 0; i < N; i++)
		read_point(&points[i]);

	for(int i = 0 ; i < N; i++)
		print_point(&points[i]);
}
