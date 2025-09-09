// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, product = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    num = abs(num); // handle negative numbers
    
    int flag = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 != 0) { // check if digit is odd
            product *= digit;
            flag = 1;
        }
        num /= 10;
    }
    
    if (flag == 0) { // if no odd digits were found
        printf("No odd digits found.\n");
    } else {
        printf("Product of odd digits: %d\n", product);
    }
    
    return 0;
}