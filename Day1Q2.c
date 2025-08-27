// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
// Note: Division by zero should be handled carefully.

#include <stdio.h>
int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);
    
    if (b != 0) {
        printf("Quotient = %d\n", a / b);
    } else {
        printf("Division by zero is not allowed!\n");
    }
    
    return 0;
}