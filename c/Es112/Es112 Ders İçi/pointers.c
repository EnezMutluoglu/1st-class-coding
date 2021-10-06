#include <stdio.h>

//The name of an array is a "POINTER" that stores the address of the first element of the array!  

int a[]={1,-3,5,-7,9,-11,13,-15};
int i;

void increase_the_elements_of_an_array_by_one(int size, int *pointer){ // or (int size, int array[]){ 
	int i;
	for (i=0; i<size; i++){
		 ( *(pointer + i) )++; // or ( *(array + i) )++;  
	}
}

void to_sort_positive_to_negative(int *a, int size){
	int i,n,temp;
	for (i=0; i<size; i++){
		if(*(a+i)<0){
			for (n=i+1; n<size; n++){
				if (*(a+n)>0){
					temp=*(a+n);
					*(a+n)=*(a+i);
					*(a+i)=temp;
					break;
				}
			}
		}
	}
}

void to_sort_small_to_big(int *a, int size){

}

int size = 8;

int main(){
	
	printf("The size of the array a: %d \n", size);
	printf("The elements of the array a; \n"); 
	
	int i;
	for (i=0; i<size; i++){
		printf("%d\t", a[i]);
	}
	
	printf("\n\nThe value of a[0] \t\t\t\t= %d \n", a[0]);
	printf("The address of a[0] \t\t\t\t= %p \n", &a[0]);
	printf("The address that the pointer a stores \t\t= %p \n", a);
	
	int *p;
	p=a;
	int **pp;
	pp=&p;
	
	printf("The address that the pointer p stores \t\t= %p \n", p);
	printf("The address of p \t\t\t\t= %p \n", &p);
	printf("The address that the pointer pp stores \t\t= %p \n", pp);
	printf("The address of pp \t\t\t\t= %p \n\n", &pp);

	printf("The value of a[1] with the classic method \t= %d \n", a[1]);
	printf("The value of a[6] with the pointer a \t\t= %d \n", *(a+6));
	printf("The value of a[3] with the pointer p \t\t= %d \n", *(p+3));
	printf("The value of a[4] with the pointer pp \t\t= %d \n", *(*pp+4));
	
	printf("\n\nChange the sixth element of the array a and print all the elements");
	
	printf("\nWith the classic method; \n");
	a[5]=73;
	for (i=0; i<size; i++){
		printf("%d\t", a[i]);
	}

	printf("\nWith the pointer a; \n");
	*(a+5)=34;
	for (i=0; i<size; i++){
		printf("%d\t", *(a+i));
	}
	
	printf("\nWith the pointer p; \n");
	*(p+5)=65;
	for (i=0; i<size; i++){
		printf("%d\t", *(p+i));
	}
	
	printf("\nWith the pointer pp; \n");
	*(*pp+5)=76;
	for (i=0; i<size; i++){
		printf("%d\t", *(*pp+i));
	}

	printf("\n\n\nIncrease the elements of the array a by 1");
	increase_the_elements_of_an_array_by_one(size,a);
	
	printf("\nPrint the new elements of the array a with the classic method; \n");
	for (i=0; i<size; i++){		
		printf("%d\t", a[i]);
	}
	
	printf("\n\n\nSort the array from positive to negative");
	to_sort_positive_to_negative(a, size);
	
	printf("\nPrint the new elements of the array a with the classic method; \n");
	for (i=0; i<size; i++){		
		printf("%d\t", a[i]);
	}

	return 0;
}




	
	
