// File: test.c
// Description: Sample C source file for testing write-protected permissions

#include <stdio.h>

// Function prototypes
void printPattern(int rows);

int main() {
    int rows = 5;
    
    printf("Printing a pattern with %d rows:\n", rows);
    printPattern(rows);
    
    return 0;
}

// Function to print a pattern with rows of increasing numbers
void printPattern(int rows) {
    int i, j;
    for (i = 1; i <= rows; ++i) {
        // Print numbers in each row
        for (j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
