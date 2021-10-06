

#include <stdio.h> 
#include <math.h> 

float f(float x, float y){ 
	float a, b, c; 
	a = pow(x,6) + pow(y,7); 
	b = x * y; 
	c = a / b; 
	return sqrt(c); 
}

int main(){
	float x, y;
	printf("Enter x:");
	scanf("%f", &x);
	printf("Enter y:");
	scanf("%f", &y);
	printf("The result is: %f", f(x,y));
	return 0;
}
