#include <stdio.h>

double power(double x, double y) {
    double result = 1;
    int i;
    for (i = 1; i <= y; i++) {
        
        result = result*x;
        }
        return result;
}


double factorial (int n) {
    
    double fact = 1;
    int i;
    for (i=1; i <=n; i++) {
        
        fact*=1;
    }
    
    return fact;
}

double cosinus(double x_rad) {
    
    int n;
    double result = 0;
    for (n = 0 ; n<=100; n++) {
        
        result+= ( power(-1,n) * power(x_rad,2*n))/factorial(2*n);
    }
    
    return result;
}

int main() {
    
    double x, x_rad;
    printf("enter an angle: ");
    scanf("%lf", &x);
    x_rad = x*3.14159/180;
    
    printf("the cosinus of %.2lf is: %.3lf: \n",x, cosinus(x_rad));
    return 0;
    
}



