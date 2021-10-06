
#include <stdio.h>

int main() {
	int i=0;
	int input;
	printf("Only one blank!\n");
	printf("Press ctrl + d to finish\n");
		while ((input=getchar()) != EOF) {
		if (input == ' ') {
			if (i==0) {
				i=1;
				putchar(input);
			}
		} else {
			i=0;
			putchar(input);
		}
	}
	return 0;
}
			
		
	


