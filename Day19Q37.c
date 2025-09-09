// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    max = (num1 > num2) ? num1 : num2;
    while(1) {
        if(max % num1 == 0 && max % num2 == 0) {
            printf("LCM of %d and %d is: %d", num1, num2, max);
            break;
        }
        max++;
    }
    return 0;
}
// Sample Test Cases:
// Input: 12 15
// Output: LCM of 12 and 15 is: 60
// Input: 5 7
// Output: LCM of 5 and 7 is: 35