
#include <stdio.h>

float celsius, fahr;
int lower, upper, step;

main()

{	
	lower = 0;
	upper = 300;
	step = 20;
	
	celsius = lower;
	
	while (celsius <= upper)
	{
		fahr = ( celsius/(5.0/9.0) ) + 32.0;
		printf("%3.0f\t%3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
