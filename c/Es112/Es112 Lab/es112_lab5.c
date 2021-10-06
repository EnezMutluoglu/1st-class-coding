
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int size(char a[]){
	int i = 0;
	while (a[i] != '\0'){
		i++;
	}
	return i;
}
int is_capital(char c){
	if (c >= 'A' && c <= 'Z'){
		return 1;
	} else {
		return 0;
	}
}
int upper_case(char c){
	return 'A'+ c - 'a';
}
int lower_case(char c){
	return 'a' + c - 'A';
}
int length_of_the_last_word(char a[], int size){
	int i, j; 
	int length = 0; 
	int state_blank = 0; 
	int state_word = 0;
	for (i = 0; i < size; i++){
		if (a[i] == ' '){
			state_blank = 0;
			break;
		} else {
			state_blank = 1;
		}  
	}
	for (i = 0; i < size; i++){
		if (a[i] != ' '){
			state_word = 0;
			break;
		} else {
			state_word = 1;
		}
	}
	if (size == 0){
		length = 0;
	} else {
		for (i = size; i >= 0; i--){
			if (state_blank){
				length = size;
			} else if (state_word){
				length = 0;
			} else if ( a[i] == ' ' && a[i-1] != ' ' ){
				for (j = i-1; a[j] != ' '; j--){
					length++;
				}
				break;
			} else if ( a[i] != ' ' && a[i-1] != ' '){
				for (j = i-1; a[j] != ' '; j--){
					length++;
				}
				break;
			}
		}
	}
	return length;
}
int number_of_repetation(char a[], int size, char c){
	int i; int count = 0;
	for (i = 0; i < size; i++){
		if (a[i] == c){
			count++;
		}
	}
	return count;
}
int main(){
	//soru 2;
	int i; char c; int counter = 0;
	printf("Enter str:\n");
	char str[20];
	gets(str);
	int size_str = size(str);
	printf("Enter letters:\n");
	char letters[20];
	gets(letters);
	int size_letters = size(letters);
	for (i = 0; i < size_letters; i++){
		if ( is_capital(letters[i]) ){
			c = letters[i];
			counter += number_of_repetation(str, size_str, c);
			c = lower_case(c);
			counter += number_of_repetation(str, size_str, c);
			c = upper_case(c);
			printf("%c appears %d time(s)\n", c, counter);
			counter = 0;
		}
	}
	//soru 1;
	printf("Enter sentence:\n");
	char a[10000];
	gets(a);
	int size_a = size(a);
	int length = length_of_the_last_word(a, size_a);
	printf("The length of the last word is %d", length);
	return 0;
}
