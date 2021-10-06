#include <stdio.h>
#include <string.h>
void remove_blanks(char *a, int size){
	int i, j;
	char temp;
	int nblank = 0;
	for (i = 0; i < size; i++){
		if ( *(a + i) == ' ' ){
			nblank++;
			temp = *(a + i);
			for (j = i; j < size; j++){
				*(a + j) = *(a + j + 1);
			}
			*(a + size - 1) = temp;
		}
	}
	nblank /= 2;
	*(a + size - nblank) = '\0';
}
void print_array_without_repetation(int *a, int size){
	int i;
	for (i = 0; i < size; i++){
		if ( *(a + i) != *(a + i + 1) ){
			printf("%d ", *(a + i));
		} 
	}
	printf("\n");
}
void print_string(char *a, int size){
	int i;
	for (i = 0; i < size; i++){
		printf("%c", *(a + i));
	}
	printf("\n");
}
int main(){
	//soru 2
	char a[]="Mer ha ba dun ya";
	int size_a = strlen(a);
	print_string(a, size_a);
	remove_blanks(a, size_a);
	size_a = strlen(a);
	print_string(a, size_a);
	//soru 1
	int b[]={1,2,3,3,3,4,5,6,6,6,6,7,8,9,9,9,9,10};
	int size_b = 18;
	print_array_without_repetation(b, size_b);
	//soru 3
	int n;
	int n_odd = 0;
	int n_even = 0;
	int sum_odd = 0;
	int sum_even = 0;
	float average = 0;
	while ( 1 ){
		printf("Enter an integer:");
		scanf("%d", &n);
		if ( n > 20 && n % 2 != 0){
			break;
		} else if ( n % 2 == 0 ){
			n_even++;
			sum_even += n;
		} else if ( n % 2 != 0 ){
			n_odd++;
			sum_odd += n;
		} 
	}
	average = (float) ( sum_odd + sum_even ) / ( n_odd + n_even );
	printf("Total number of even numbers: %d\n", n_even);
	printf("Total number of odd numbers: %d\n", n_odd);
	printf("Sum of even numbers: %d\n", sum_even);
	printf("Sum of odd numbers: %d\n", sum_odd);
	printf("Average of all numbers: %.3f\n", average);
	return 0;
}
