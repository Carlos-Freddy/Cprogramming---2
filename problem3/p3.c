#include <stdio.h>
#include <stdlib.h>

int finGCD(int n1, int n2);
void printFraction(int num, int denom);
void scanFraction(int *num_ptr, int *denom_ptr);
void reduceFraction(int *num_ptr, int *denom_ptr);

int main(void) {
    int num1;
    int denom1;
    puts("Enter numerator> ");
    scanf("%d", &num1);
    puts("\nEnter denominator> ");
    scanf("%d", &denom1);
    scanFraction(&num1, &denom1);
    reduceFraction(&num1, &denom1);
}

int findGCD(int n1, int n2) {
    int *q; 
    *q = abs(n1);
    int *p;
    *p = abs(n2);
    int *r;
    *r = *q / *p;
    if(!(*r == 0)) {
        *r = *q;
        *q = *p;
        *r = *q / *p;
        return *r;
    }
    else {
        return -1;
    }
}

void printFraction(int num, int denom) {
    printf("The entered fraction> %d/%d", num, denom);
}

void scanFraction(int *num_ptr, int *denom_ptr) {
    int num1 = *num_ptr;
    int denom1 = *denom_ptr;
    printFraction(num1, denom1);
}

void reduceFraction(int *num_ptr, int *denom_ptr) {
    int N1 = *num_ptr;
    int N2 = *denom_ptr;
    if (findGCD(N1, N2) >= 0 ) {
    N1 /= findGCD(N1, N2);
    N2 /= findGCD(N1, N2);
    printf("The reduced fraction> ");
    scanFraction(&N1, &N2);
    }
    else {
        puts("Error. This fraction does not have a real solution. Change denominator");
    }
}