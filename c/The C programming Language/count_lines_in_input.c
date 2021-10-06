

#include <stdio.h>

void main () {
	int c, nl;
	nl=0;
	while ((c=getchar()) != EOF) {
		if (c == '\n') 
		/* "==" means "is equal to" 
		 * "\n" is a single character, is just an integer; is a string constant, contains only one character */
			++nl;
	}
	printf("The number of lines = %d\n", nl);
}
