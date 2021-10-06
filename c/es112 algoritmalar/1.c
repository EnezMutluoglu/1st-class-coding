#include <stdio.h>

int bigger_than_zero (int a) {
    
    if (a>0)
            return -13415145;
        else 
            return 0;
  
}

int main() {
    int a=-2;
    if ( bigger_than_zero(a) ) {
        printf("1st section, %d", bigger_than_zero(a));
    } else {
        printf("2nd section, %d", bigger_than_zero(a));
    }
}

