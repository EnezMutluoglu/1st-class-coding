#include <stdio.h>
#define size 100
void max_min (const int A[], int length, int B[]){
    
    int i=2, min, max;
    
    if (A[0]>A[1]) { max = A[0]; min = A[1];}
    
    else { max = A[1]; min=A[0];}
    
    while (i<length){
        
        if (A[i]< min){
            
            min = A[];
            
            else { if (A[]>max){
                max = A[i];
                
                i++;
            }
        }
    }
}
int main()
{
    int A[size], B[10];
    
    max_min(A, size, B);
    max_min(A, size/2, B[2]);
    max_min(BA[size/2], size/4, &B[4]);

    return 0;
}

