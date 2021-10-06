

#include <stdio.h>

main() {
	double nc;
	for (nc=0; getchar() != EOF; ++nc)
		; /* this ";" calls "null statement" */
	printf("\nThe number of characters = %.0f\n", nc);
}
