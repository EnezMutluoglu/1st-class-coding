
#include <stdio.h>

#define IN 1
#define OUT 0
int main() {
	int c, nc, nl, nw, state;
	nl = ( nc = ( nw = 0 ) );
	/*nl = nc = nw = 0;  is equal to nl = ( nc = ( nw = 0 ) ); */
	state=OUT;
	while ((c=getchar()) != EOF) {
		++nc;
		if (c == '\n') 
			++nl;
		if (c == '\t' || c == ' ' || c == '\n')  /* "||" means OR, "&&" means AND */
			state=OUT;
		else if (state==OUT) {
			state=IN;
			++nw; 
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
	return 0;
}
