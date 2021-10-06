#include <stdio.h>


double mean (int A[], int N){
    int i;
    int sum = 0;
    for (i=0; i<N; i++){
        sum += A[i];
        
    }
    return (double) sum/N;
    
}
int main()
{

    int N = 4;
    int A[]={8,4,6,1};
    
    double m = mean(A,N);
    double sum = 0;
    int i;
    
    for (i=0; i<N; i++) {
        
        sum += pow ( (A[i]-m), 2.0);
        
            }
    
    double variance = sum/N;
    double std = sqrt(variance);
    
    printf("mean = %.2lf\n" ,m);
    printf("std = %.2lf\n" ,std);

    return 0;
}

