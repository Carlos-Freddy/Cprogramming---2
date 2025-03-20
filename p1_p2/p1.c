#include <stdio.h>

void isMultiple (int *y, int *x){
    if ( *x % *y == 0 ) {
        puts("1");
    }
    else {
        puts("0");
    }
}