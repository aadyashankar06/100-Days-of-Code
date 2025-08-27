// Day4 Q8
// Write a C program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum;

    printf("Enter value of n: ");
    scanf("%d", &n);

    // Formula method
    sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}