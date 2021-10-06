#include <stdio.h>
int i;
int size_a; int size_b;
char a[256]="the number of the words of the first sentence is 6";
char b[256]="the";

int size_of_string(char *a){
	int i; int size=0;
	for (i=0; *(a+i)!='\0'; i++){
		size++;
	}
	return size;
}

void print_string(char *a, int size){
	int i;
	for (i=0; i<size; i++){
		printf("%c", *(a+i));
	}
	printf("\n");
}

void reverse_string(char *a, int size){
	int i; char temp;
	for (i=0; i<size/2; i++){
		temp=*(a+i);
		*(a+i)=*(a+size-1-i);
		*(a+size-1-i)=temp;
	}
}
	
void change_them_char(char *x, char *y){
	char temp;
	temp= *x;
	*x=*y;
	*y=temp;
}

void count_number_of_char_in_string(char *a, int size, char b){
	int i; int counter=0;
	for (i=0; i<size; i++){
		if(a[i]==b){
			counter++;
		}
	}
	printf("%d\n", counter);
}

void count_number_of_word_in_string(char *a, int size){
	int i; int counter=1;
	for (i=0; *(a+i)!=0; i++){
		if(a[i]==' ' && a[i+1]!=' '){
			counter++;
		}
	}
	printf("%d\n", counter);
}
	
void count_word_in_string(char *a, int size_a, char *b, int size_b){








	
}
	
void shift_right(char *a, int size){
	int i;
	char temp;
	temp=*(a+size-1);
	for (i=size; i>0; i--){
		*(a+i)=*(a+i-1);
	}
	*a=temp;
	*(a+size)=0;
}
	

int main(){
	size_a=size_of_string(a);
	size_b=size_of_string(b);
	count_number_of_char_in_string(a, size_a, 't');
	
	
	
	
	
	
	return 0;
}

