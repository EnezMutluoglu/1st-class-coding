#include <stdio.h>

void shiftRight(int sz, char text[]){
	int j;
	for (j = sz; j>0; j--)
		text[j]=text[j-1];
	}

int main()
{

	int i = 0;
	char text[]="First Second";

	while (text[i]!='\0') 
		i++;

		int sz = i;
	
	shiftRight(sz, text);
	text[0]=' ';

	char tmp;
	
	while (text[sz]!=' '){
		tmp = text[sz];
		shiftRight(sz, text);
		text[0]=tmp;
		printf("%s\n",text);

	}

	text[sz]= '\0';

		return 0;

		}
