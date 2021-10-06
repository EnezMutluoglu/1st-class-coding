

#include <stdio.h>

main() {
	int a;
	a=getchar();
	while(a != EOF) {
		/* EOF is (Ctrl+d) 
		 * The value of EOF is "-1" */
		putchar(a);
		a=getchar();
	}
}

