
#include <stdio.h>
#include <math.h>

#define PI 3.14

int nquestion;
int calc_k(int x, int y, int n){
	int k;
	k = pow(x,n) + pow(y,n);
	return k;
}

int main(){
	
	while (1){
	printf("Enter question number 1/2:");
	scanf("%d", &nquestion);
		if (nquestion == 1){
			double r, r3, volume;
			printf("Enter r:");
			scanf("%lf", &r);
			r3 = pow(r,3);
			volume = (4.0/3.0) * PI * r3;
			printf("The volume of the sphere is:%.3lf", volume);
			break;
		} else if (nquestion == 2){
			int a, b;
			double n, m, o;
			printf("Enter a:");
			scanf("%d", &a);
			printf("Enter b:");
			scanf("%d", &b);
			m = calc_k(a,b,3);
			o = calc_k(a,b,2);
			n = m / o;
			printf("The result is:%.3lf", n);
			break;
		} else {
		    printf("Enter 1 or 2!!\n");
		}
	}
	return 0;
}
