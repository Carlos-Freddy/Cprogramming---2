#include <stdio.h>

void Problem_4 (int j, int n);
void Problem_5 (int N, int P);

//PROBLEM 6
void Problem_6();
void printline(char c, int n);
void printlinePattern(char c1, char c2, int n);
void printCheckboard(char c1, char c2, int size);
void printColumnSwapCheckerboard(char c1, char c2, int size);

int main() {
// PROBLEM 4. SUM OF NUMBERS
Problem_4(0, 0);

// PROBLEM 5. COUNTING POSITIVES AND NEGATIVES
Problem_5(0, 0);

//PROBLEM 6. CHECKBOARD PATTERN PRINTING IN C
Problem_6();

}

/**PROBLEM #4**/
void Problem_4 (int j, int n) {
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n ; i += 1) {
        while ((i % 5) == 0) {
            j += i;
            ++i;
        }
    }
    printf("The sum is: %d\n", j);
}

/**PROBLEM #5**/
void Problem_5 (int N, int P) {
    for(int k = 1; k != 0; k = k) {
        scanf("%d", &k);
            if (k < 0) {
                ++N;
            }
            else if (k > 0) {
                ++P;
            }
        }
        printf("the number of negatives is: %d\n", N);
        printf("the number of positives is: %d\n", P);
}

/**PROBLEM #6**/
void Problem_6 () {
char c1;
char c2;
int n;
printf("Enter the first character: ");
scanf(" %c", &c1);
printf("Enter the second character: ");
scanf(" %c", &c2);
printf("Enter an integer: ");
scanf("%d", &n);
printline(c1, n);
printlinePattern(c1, c2, n);
printCheckboard(c1, c2, n);
printColumnSwapCheckerboard(c1, c2, n);
}

//printline
void printline(char c, int n) {
    int i = 1;
    while(i <= n) {
        printf("%c ", c);
        ++i;
    }
    printf("\n");
}

//printlinePattern
void printlinePattern(char c1, char c2, int n) {
    int i = 1;
        do {
            if((i % 2) != 0) {printf("%c ", c1);}
            else {printf("%c ", c2);}
            ++i;
        } while (i <= n);
    printf("\n");   
}

//printChechboard
void printCheckboard(char c1, char c2, int size) {
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0) {
            int c = 0;
            do {
                if (c % 2 == 0) {
                    printf("%c ", c1);
                    ++c;
                }
                else {
                    printf("%c ", c2);
                    ++c;
                }
            } while(c < size);
        }
        else {
            int c = 0;
            do {
                if (c % 2 == 0) {
                    printf("%c ", c2);
                    ++c;
                }
                else {
                    printf("%c ", c1);
                    ++c;
                }
            } while(c < size);
        }
    printf("\n");
    }
}

void printColumnSwapCheckerboard(char c1, char c2, int size) {
    for (int i = 0; i < size; ++i ) {
        do {
            if(i % 2 == 0) {
                (printline(c1, size));
                ++i;
        }
            else {
                (printline(c2, size));
                ++i;
        }
    }while (i < size);
    }
    printf("\n");
}