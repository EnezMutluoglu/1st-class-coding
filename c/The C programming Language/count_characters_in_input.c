

#include <stdio.h>

main() {
	long nc;
	nc=0;
	while(getchar() != EOF) {
		++nc;
		/* ++nc => increment by one == nc=nc+1
		 * --nc => decrement by one */
	}
	printf("\nThe number of characters = %ld\n", nc);
	/* %ld => long integer */
}
		

