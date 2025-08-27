// Day4 Q7
// Write a C program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping without third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}