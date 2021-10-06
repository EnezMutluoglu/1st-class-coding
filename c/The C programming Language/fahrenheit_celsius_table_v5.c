

#include <stdio.h>

void print_fahrenheit_celsius_table();

int main(){
	print_fahrenheit_celsius_table();
	return 0;
}

void print_fahrenheit_celsius_table(){
	int fahr;
	for (fahr = 0; fahr <= 300; fahr = fahr + 20){
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}
}
