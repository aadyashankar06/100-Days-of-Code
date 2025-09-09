// Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num < 0)
        printf("Error: Factorial of negative number is not defined.\n");
    else if(num == 0 || num == 1)
        printf("Factorial of %d = 1\n", num);
    else {
        for(i = 2; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}