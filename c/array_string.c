#include <stdio.h>

// bir string'in size'ını bulma
int size_of_string(char a[]){
	int i = 0;
	while (a[i] != '\0'){
		i++;
	}
	return i;
}

// bir karakterin harf olup olmadığını anlama
int letter_or_not(char c){
	if (c >= 'a' && c <= 'z'){
		return 1;
	} else if (c >= 'A' && c <= 'Z'){
		return 1;
	} else {
		return 0;
	}
}

// küçük yazılan harfi büyük harfe çevirme
void upper_case(char *c){
	*c = 'A'+ *c - 'a';
}

// büyük yazılan harfi küçük harfe çevirme
void lower_case(char *c){
	*c = 'a' + *c - 'A';
}

// büyük yazılan harfi küçültme, küçük yazılan harfi büyütme
void change_letter(char *c){
	if (*c >= 'a' && *c <= 'z'){
		*c = 'A'+ *c - 'a';
	} else if (*c >= 'A' && *c <= 'Z'){
		*c = 'a' + *c - 'A';
	}
}

// bir harfin bir string içinde kaç kere geçtiğini bulma
int number_of_repetation(char *a, int size, char c){
	int i; int count = 0;
	for (i = 0; i < size; i++){
		if ( *(a+i) == c){
			count++;
		}
	}
	return count;
}

// bir array'i pozitiften negatife doğru sıralama
void to_sort_positive_to_negative(int *a, int size){
	int i,n,temp;
	for (i=0; i<size; i++){
		if(*(a+i)<0){
			for (n=i+1; n<size; n++){
				if (*(a+n)>0){
					temp=*(a+n);
					*(a+n)=*(a+i);
					*(a+i)=temp;
					break;
				}
			}
		}
	}
}

// bir array'i küçükten büyüğe doğru sıralama
void to_sort_small_to_big(int *a, int size){
	int i, j, temp; 
	int the_smallest;
	for (i=0; i<size; i++){
		the_smallest = *(a+i);
		for (j=i+1; j<size; j++){
			if (*(a+j) < the_smallest){
				temp = *(a+j);
				*(a+j) = *(a+i);
				*(a+i) = temp;
			}
		}
	}
}

// bir array'i büyükten küçüğe doğru sıralama
void to_sort_big_to_small(int *a, int size){
	int i, j, temp; 
	int the_biggest;
	for (i=0; i<size; i++){
		the_biggest = *(a+i);
		for (j=i+1; j<size; j++){
			if (*(a+j) > the_biggest){
				temp = *(a+j);
				*(a+j) = *(a+i);
				*(a+i) = temp;
			}
		}
	}
}

// bir array'i ekrana basma
void print_array(int *a, int size){
	int i;
	for (i=0; i<size; i++){
		printf("%d ", *(a+i));
	}
	printf("\n");
}

// bir string'i ekrana basma
void print_string(char *a, int size){
	int i;
	for (i=0; i<size; i++){
		printf("%c", *(a+i));
	}
	printf("\n");
}

// bir string'i ters çevirme
void reverse_string(char *a, int size){
	int i; char temp;
	for (i=0; i<size/2; i++){
		temp=*(a+i);
		*(a+i)=*(a+size-1-i);
		*(a+size-1-i)=temp;
	}
}

// bir string'i sağa doğru bir kere kaydırma
void shift_right(char *a, int size){
	int i;
	char temp;
	temp=*(a+size-1);
	for (i=size; i>0; i--){
		*(a+i)=*(a+i-1);
	}
	*a=temp;
	*(a+size)=0;
}

// bir string'i sola doğru bir kere kaydırma
void shift_left(char *a, int size){
	int i;
	char temp;
	temp=*(a+0);
	for (i=0; i<size; i++){
		*(a+i)=*(a+i+1);
	}
	*(a+size-1) = temp;
}

// bir kelimenin bir string içinde kaç kere tekrar ettiğini bulma
int count_word_in_string(char *a, int size_a, char *b, int size_b){
	int i,j, k;
	int state = 0;
	int counter = 0;
	for (i=0; i<size_a; i++){
		if ( *(a+i) == *(b+0) ){
			k = i;
			for (j=0; j<size_b; j++){
				if ( *(a+k) == *(b+j) ){
					state = 1;
				} else {
					state = 0;
					break;
				}
				k++;
			}
		if (state){
			counter++;
		}
		}
	}
	return counter;
}

// bir string içindeki kelime sayısını bulma
int number_of_words_in_string(char *a, int size){
	int i;
	int counter = 0;
	if ( *(a) != ' '){
		counter++;
	}
	for (i=0; i<size; i++){
		if ( *(a+i) == ' ' && *(a+i+1) != ' ' && *(a+i+1) != '\0'){
			counter++;
		}
	}
	return counter;
}

// bir string içinde istenilen kelimenin uzunluğunu bulma
int length_of_the_word(char *a, int size, int n){
	int i;
	int state = 0;
	int nword = 0;
	int nlength = 0;
	for (i=0; i<size; i++){
		if ( letter_or_not( *(a+i) ) == 0){
			state = 0;
		} else if (state == 0){
			state = 1;
			if (nword == n){
				break;
			}
			nword++;
			nlength = 1; 
		} else if (state == 1){
			nlength++;
		}
	}
	return nlength;
}

// bir string içinde istenilen kelimeyi ters çevirme
void reverse_word_in_string(char *a, int size, int n){
	int i, j, k;
	int state = 0;
	int nword = 0;
	int nlength = 0;
	int size_n;
	int start;
	int end;
	char temp;
	for (i=0; i<size; i++){
		if ( letter_or_not( *(a+i) ) == 0 ){
			state = 0;
		} else if (state == 0){
			state = 1;
			if (nword == n-1){
				start = i;
			}else if (nword == n){
				break;
			}
			nword++;
			nlength = 1; 
		} else if (state == 1){
			nlength++;
		}
	}
	size_n = nlength;
	end = start + size_n - 1;
	j = start;
	k = end;
	for (i=0; i<size_n/2; i++){
		temp = *(a+j);
		*(a+j) = *(a+k);
		*(a+k) = temp;
		j++;
		k--;
	}
}

int main(){
	
	
	
	
	

	return 0;
}

