#include <stdio.h>

void print_spaces (int n){
    
    int i;
    for (i=0; i<n; i++)
    printf (" ");
    
}

void print_stars (int n){
    
    int j;
    for (j=0; j<n; j++)
    printf ("*");
}

void main() {
    
    int height;
    printf ("enter a number: ");
    scanf ("%d",&height);
    int i;
    
    for (i=1; i<=height; i++){
        
        print_spaces(height-i);
        print_stars(5);
        print_spaces(5);
        print_stars(5);
        printf("\n");
    }
}