#include "functions.h"
#include <math.h>

float average(float a, float b, float c, float d){
	return (a + b + c + d) / 4;
}

float std(float a, float b, float c, float d){
	float variance = average(a*a, b*b,c*c, d*d) - average(a,b,c,d)*average(a,b,c,d);
	return sqrt(variance);
}
