// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of digits is: %d", sum);
    return 0;
}
// Sample Test Cases:
// Input: 123
// Output: Sum of digits is: 6
// Input: 4567
// Output: Sum of digits is: 22