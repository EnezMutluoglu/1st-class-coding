

#include <stdio.h>

void main() {
	printf("This program counts lines, blanks and tabs in input...\n");
	printf("Press ctrl + d to finish\n");
	int input;
	int blank = 0;
	int tab = 0;
	int line = 0;
	while ((input=getchar()) != EOF) {
		if (input == '\n')
			++line;
		if (input == '\t')
			++tab;
		if (input == ' ')
			++blank;
	}
	printf("The number of lines is = %d\n", line);
	printf("The number of blanks is = %d\n", blank);
	printf("The number of tabs is = %d\n", tab);
}
		
	
