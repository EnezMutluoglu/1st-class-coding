
#include <stdio.h>
#define IN 1
#define OUT 0
#define YES 1
#define NO 0
#define MAX_WORD_LENGTH 50
int c;
int i;
int word_status = OUT;
unsigned long long int number_of_word;
unsigned long long int length = 1;
unsigned long long int number_of_words_for_each_length[MAX_WORD_LENGTH];
unsigned long long int length_of_the_longest_word;
unsigned long long int length_of_the_shortest_word;
int letter_or_not(int c);
void print_histogram_of_the_number_of_words_for_each_length( unsigned long long int *a, int size_a);
int main(){
	for ( i = 0; i < MAX_WORD_LENGTH; i++ ){
		number_of_words_for_each_length[ i ] = 0;
	}
	printf("This program prints a histogram of the lengths of words in its input\n\n");
	printf("Do not forget to press enter after entering the words!\n");
	printf("After that press ctrl+d to continue\n\n");
	printf("Enter words;\n");
	while ( ( c = getchar() ) != EOF ){
		if ( letter_or_not(c) == NO ){
			word_status = OUT;
		} else if ( word_status == OUT ){
			word_status = IN;
			number_of_word++;
			if ( length < MAX_WORD_LENGTH ){
				number_of_words_for_each_length[ length - 1 ]++;
			} else if ( length >= MAX_WORD_LENGTH ){
				number_of_words_for_each_length[ MAX_WORD_LENGTH - 1 ]++;
			}
			length = 1;
		} else if ( word_status == IN ) {
			length++;
		}
	}
	if ( length < MAX_WORD_LENGTH ){
		number_of_words_for_each_length[ length - 1 ]++;
	} else if ( length >= MAX_WORD_LENGTH ){
		number_of_words_for_each_length[ MAX_WORD_LENGTH - 1 ]++;
	}
	number_of_words_for_each_length[ 0 ]--;
	for ( i = MAX_WORD_LENGTH - 1; i >= 0; i-- ){
		if ( number_of_words_for_each_length[ i ] != 0 ){
			if ( i < MAX_WORD_LENGTH - 1 ){ 
				length_of_the_longest_word = i + 1;
			} else if ( i == MAX_WORD_LENGTH - 1 ){
				length_of_the_longest_word = MAX_WORD_LENGTH;
			}
			break;
		}
	}
	for ( i=0; i<MAX_WORD_LENGTH; i++ ){
		if ( number_of_words_for_each_length[ i ] != 0 ){
			length_of_the_shortest_word = i + 1;
			break;
		}
	}
	print_histogram_of_the_number_of_words_for_each_length( number_of_words_for_each_length, MAX_WORD_LENGTH );
	printf("\n\n\t\t\t\t\t\t%lld word(s) are entered.", number_of_word );
	if ( length_of_the_longest_word == MAX_WORD_LENGTH ){
		printf("\n\t\t\t\t\t\tThe longest word has %lld+ letter(s).", length_of_the_longest_word );
	} else {
		printf("\n\t\t\t\t\t\tThe longest word has %lld letter(s).", length_of_the_longest_word );
	}
	printf("\n\t\t\t\t\t\tThe shortest word has %lld letter(s).", length_of_the_shortest_word );
	/*
	printf("\n");
	for (i = 0; i < MAX_WORD_LENGTH; i++ ){
		printf("%lld\t", number_of_words_for_each_length[ i ] );
	}
	printf("\n%lld\t%lld\t%lld", number_of_word,length_of_the_shortest_word,length_of_the_longest_word);
	*/
	return 0;
}
int letter_or_not(int c){
	if (c >= 'a' && c <= 'z'){
		return 1;
	} else if (c >= 'A' && c <= 'Z'){
		return 1;
	} else {
		return 0;
	}
}
void print_histogram_of_the_number_of_words_for_each_length( unsigned long long int *a, int size_a){
	int max_length = 9;
	unsigned long long int i, j;
	unsigned long long int length, word_number ;
	unsigned long long int max_number_of_words = 0;
	unsigned long long int max_number_of_words_1 = 0;
	unsigned long long int max_number_of_words_2 = 0;
	for ( i = 0; i < size_a; i++ ){
		if ( i < max_length ){
			if ( max_number_of_words_1 < a[ i ] ){
				max_number_of_words_1 = a[ i ];
			}
		} else if ( i >= max_length ){
			max_number_of_words_2 += a[ i ];
		}
	}
	if ( max_number_of_words_1 > max_number_of_words_2 ){
		max_number_of_words = max_number_of_words_1;
	} else if ( max_number_of_words_1 < max_number_of_words_2 ){
		max_number_of_words = max_number_of_words_2;
	} else if ( max_number_of_words_1 == max_number_of_words_2 ){
		max_number_of_words = max_number_of_words_1;
	}
	//printf("\n%lld\t%lld\t%lld\n",max_number_of_words,max_number_of_words_1, max_number_of_words_2);
	printf("\n\t\t\t\t\t\tHistogram of the Lengths of the Words\n\n");
	word_number = max_number_of_words;
	length = 0;
	for ( i = 0; i < max_number_of_words + 4; i++ ){
		for ( j = 0; j < max_length + 6; j++){
			if ( i == 0 && j == 2 ){
				printf("Number of Words");
			} else if ( i == 1 && j == 2 ){
				printf("^\t");
			} else if ( i >= 2 && i <= max_number_of_words + 1 && j == 1 && word_number >= 1 ){
				printf("%lld\t", word_number );
				word_number--;
				if ( word_number == 0 ){
					word_number++;
				}
			} else if ( i >= 2 && i <= max_number_of_words + 1 && j == 2 && word_number >= 1 ){
				printf("|\t");
			} else if ( i == max_number_of_words + 2 && j == 2 ){
				printf("+----");
			} else if ( i == max_number_of_words + 2 && j>= 3 && j <= max_length + 3 ){
				printf("--------");
			} else if ( i == max_number_of_words + 3 && j >= 2 && j <= max_length + 2 && length <= 9 ){
				printf("%lld\t", length );
				length++;
			} else if ( i == max_number_of_words + 3 && j == max_length + 3 ){
				printf("%lld+\t", length );
			} else if ( i == max_number_of_words + 2 && j == max_length + 4 ){
				printf("> Word Length");
			} else if ( i >= 2 && i <= max_number_of_words + 1 && j >= 3 && j <= max_length + 3 ){
				if ( i <=  max_number_of_words - a[ j - 3 ] + 1  && j <= max_length + 2 ){
					printf("\t");
				} else if ( i <=  max_number_of_words - max_number_of_words_2 + 1  && j == max_length + 3 ){
					printf("\t");
				} else {
					printf("*\t");
				}
			} else {
				printf("\t");
			}
		}
		printf("\n");
	}
}
