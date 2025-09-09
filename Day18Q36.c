// Q36: Write a program to find HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int hcf;
    for(int i = 1; i <= (num1 < num2 ? num1 : num2); i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d", num1, num2, hcf);
    return 0;
}