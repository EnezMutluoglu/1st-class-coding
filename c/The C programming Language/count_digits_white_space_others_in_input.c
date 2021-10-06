

#include <stdio.h>

main() {
	int c, i, nwhite, nother;
	int ndigit[10]; /* ndigit is an array which stores 10 integers */
	
	nwhite = nother = 0;
	
	for (i=0; i<10; ++i)
		ndigit[i] = 0; /* i=0,1,2,3,4,5,6,7,8,9 */
	while ((c=getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0']; /* " c - '0' " => the value of c - the value of the character "0" */
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	printf("Digits = ");
	for (i=0; i<10; ++i)
		printf("%d", ndigit[i]);
	printf(" white space = %d, other = %d\n", nwhite, nother);
}
	
