// Day3 Q6
// Write a C program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping using temp
    temp = a;
    a = b;
    b = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}