
#include <stdio.h>
#define MAX_CHAR_NUMBER 256
#define START 33
#define END 126
int c;
int i;
unsigned long long int total_character = 0;
unsigned long long int number_of_char_for_each_char[ MAX_CHAR_NUMBER ];
void print_histogram_of_the_frequencies_of_different_characters( unsigned long long int *a);
int main(){
	for ( i = 0; i < MAX_CHAR_NUMBER; i++ ){
		number_of_char_for_each_char[ i ] = 0;
	}
	printf("This program prints a histogram of the frequencies of different characters in its input\n\n");
	printf("Do not forget to press enter after entering the words!\n");
	printf("After that press ctrl+d to continue\n\n");
	printf("Enter words;\n");
	while ( ( c = getchar() ) != EOF ){
		number_of_char_for_each_char[ c ]++;
	}
	for ( i = START; i <= END; i++ ){
		total_character += number_of_char_for_each_char[ i ];
	}
	print_histogram_of_the_frequencies_of_different_characters( number_of_char_for_each_char );
	printf("\n\t\t\t\t\t%lld character(s) are entered.\n", total_character );
	/*
	printf("\n");
	for ( i = START; i < END; i++ ){
		if ( number_of_char_for_each_char[ i ] != 0 )
		printf("%lld\t%c\n",number_of_char_for_each_char[ i ], i);
	}
	*/
	return 0;
}
void print_histogram_of_the_frequencies_of_different_characters( unsigned long long int *a){
	unsigned int c = 0;
	unsigned int character[ END - START + 1 ];
	unsigned int max_number_of_character = 0;
	unsigned long long int i, j;
	unsigned long long int frequency;
	unsigned long long int max_number_of_frequency = 0;	
	for ( i = 0; i < END - START + 1; i++ ){
		character[ i ] = 0;
	}
	for ( i = START; i <= END; i++ ){
		if ( a[ i ] != 0 ){
			max_number_of_character++;
			character[ c ] = i ;
			c++;
		}  
		if ( a [ i ] > max_number_of_frequency ){
			max_number_of_frequency = a[ i ];
		}
	}
	//printf("%lld\t%lld\n\n",max_number_of_character,max_number_of_frequency);
	printf("\n\t\t\t\t\tHistogram of the Frequencies of Different Characters\n\n");
	c = 0;
	frequency = max_number_of_frequency;
	for ( i = 0; i < max_number_of_frequency + 4; i++ ){
		for ( j = 0; j < max_number_of_character + 5; j++ ){
			if ( i == 0 && j == 2 ){
				printf("Frequency");
			} else if ( i == 1 && j == 2 ){
				printf("^\t");
			} else if ( i >= 2 && i <= max_number_of_frequency + 1 && j == 1 && frequency >= 1 ){
				printf("%lld\t", frequency );
				frequency--;
				if ( frequency == 0 ){
					frequency++;
				}
			} else if ( i >= 2 && i <= max_number_of_frequency + 1 && j == 2 && frequency >= 1 ){
				printf("| ");
			} else if ( i == max_number_of_frequency + 2 && j == 2 ){
				printf("+--");
			} else if ( i == max_number_of_frequency + 2 && j>= 3 && j <= max_number_of_character + 2 ){
				printf("--");
			} else if ( i == max_number_of_frequency + 3 && j >= 3 && j <= max_number_of_character + 2 && c <= END - START + 1 ){
				printf("%c ", character[ c ] );
				c++;
			} else if ( i == max_number_of_frequency + 2 && j == max_number_of_character + 3 ){
				printf("> Character");
			} else if ( i >= 2 && i <= max_number_of_frequency + 1 && j >= 3 && j <= max_number_of_character + 2 ){
				if ( i <=  max_number_of_frequency - a[ character[ j - 3 ]  ] + 1 ){
					printf("  ");
				} else {
					printf("* ");
				}
			} else if ( j < 2 ){
				printf("\t");
			} else if ( j == 2 && i == max_number_of_frequency + 3 ){
				printf("  ");
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
}
