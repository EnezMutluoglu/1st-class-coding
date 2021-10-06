

#include <stdio.h>
void main() {
	int input, i;
	i=0;
	while ((input=getchar()) != EOF) {
		if (input == '\t') {
			putchar('\\');
			putchar('t');
			i=1;
		}else if (input == '\b')  {
			putchar('\\');
			putchar('b');
			i=1;
		}else if (input == '\\') {
			putchar('\\');
			putchar('\\');
			i=1;
		}else if (i==1) { 
		putchar(input);
		}
	}
}




