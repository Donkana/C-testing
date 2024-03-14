// File: example.c
// Description: Sample C source file for testing read-only permissions

#include <stdio.h>

// Function prototypes
int fibonacci(int n);
void printFibonacciSeries(int count);
void readOnlyOperation();

int main() {
    int count = 10;
    
    printf("Fibonacci series of first %d numbers:\n", count);
    printFibonacciSeries(count);

    // Perform a read-only operation
    readOnlyOperation();
    
    return 0;
}

// Function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Function to print Fibonacci series
void printFibonacciSeries(int count) {
    int i;
    for (i = 0; i < count; ++i) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

// Function demonstrating a read-only operation
void readOnlyOperation() {
    FILE *file;
    char ch;
    
    // Open the current source file for reading
    file = fopen(__FILE__, "r");
    
    // Read and print the first 10 characters from the file
    printf("Contents of the source file (first 10 characters):\n");
    for (int i = 0; i < 10; ++i) {
        ch = fgetc(file);
        printf("%c", ch);
    }
    
    // Close the file
    fclose(file);
}
