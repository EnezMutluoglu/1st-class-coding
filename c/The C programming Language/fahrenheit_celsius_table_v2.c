

#include <stdio.h>

float fahr, celsius;
int lower, upper, step;

main()
{
	lower = 0;
	upper = 300;
	step = 20;
	
	fahr = lower;
	
	while (fahr <= upper)
	{
		celsius = (5.0/9.0) * (fahr - 32.0);	
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		
		/* %3.0f => print as floating point, at least 3 characters wide
		 * %6.1f => print as floating point, at least 6 characters wide and 2 characters after decimal point */
		
		fahr = fahr + step;
    }
}
