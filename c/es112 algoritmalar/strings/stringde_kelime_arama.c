#include <stdio.h>
#include <string.h>

int main()
{
	char pattern[256] = "the";
	char phrase[256] = "now the girl is the third one";
	int i = 0;
	int tempcounter;
	int counter = 0;
	while (phrase[i]!='\0'){
		tempcounter = 0;
		if(phrase[i]==pattern[tempcounter]){
		    while(phrase[i]==pattern[tempcounter] && phrase[i]!=0){
		        
		        
			tempcounter++;
			i++;

		}
	} else { 
		i++;
	}
	}
	if (pattern[tempcounter]=='\0') 
	    
	    counter ++;
	    printf("counter = %d\n", counter);

	return 0;
}

