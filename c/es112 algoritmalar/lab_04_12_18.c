/* lab 04_12_18
1)
write main program that charger the values of the elements of array A[],
a->5,-8,9,0,-5,4,7,-15,5,0

print array 
if ai>5 then ai=ai-5,
if ai<5 then ai=ai+5,

2) write a function for the same task. 
void change (int A[], int size)
int main same array, int size use function 
and print array.
result->5,-3,4,5,0,9,2,-10,5,5.
*/

#include <stdio.h>

void change (int A[], int size){
	int i;
	for (i=0; i<size; i++)
	{
		if (A[i] > 5)	{
		    
			printf("%d ", A[i]-5);

		}
		else if (A[i]<5)
		{
			printf("%d ",A[i]+5);
		}
	else {
		printf("%d ", A[i]);
	}
	}
    }
	int main(){
		int size=10;
		int A[]={5,-8,9,0,-5,4,7,-15,5,0};
			
			change(A,10);
			
			return 0;
		}
	