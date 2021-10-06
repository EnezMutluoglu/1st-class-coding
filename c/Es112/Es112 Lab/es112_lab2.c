
#include <stdio.h>

int nquestion;
int n;
int i=1;
int m;

int f(int x){
	return (2*x)+1;
}

int main(){
	while (1){
	printf("Enter question number 1/2:");
	scanf("%d", &nquestion);
		if (nquestion == 1){
			printf("Enter a number:", n);
			scanf("%d", &n);
			if (n <= 0){
				printf("Error");
			} else if (n % 2 == 0 && n % 3 == 0){
				printf("%d is even and disible by 3.", n);
			} else if (n % 2 == 0 && n % 3 != 0){
				printf("%d is even but not disible by 3.", n);
			} else if (n % 2 != 0 && n % 3 == 0){
				printf("%d is odd and disible by 3.", n);
			} else if (n % 2 != 0 && n % 3 != 0){
				printf("%d is odd and not disible by 3.", n);
			}	
			break;
		} else if (nquestion == 2){
			printf("Enter a number:", n);
			scanf("%d", &n);
			m=n;
			while (i<=n){
				printf("%d ", m);
				m=f(m);
				++i;
			}	
			break;
		} else {
	    printf("Enter 1 or 2!!\n");
	}
}
	return 0;
}

