

#include <stdio.h>

/* use stdio.h library */

int fahr, celsius;
int lower, upper, step;

/* these are all variables */

main()

/* to print fahrenheit-celsius table from 0 to 300 */

{
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	while (fahr <= upper)
	{
		celsius = (5 * (fahr - 32)) / 9;
		printf("%d\t%d\n", fahr, celsius);
		
		/* %d => print as decimal integer
		 * \t => tab 
		 * %d => print as decimal integer 
		 * \n => new line */
		
		fahr = fahr + step;	
	}
	
}
