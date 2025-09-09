// Q40: Write a program to find the 1's complement of a binary number.

#include <stdio.h>

int main() {
    long long binNum;
    printf("Enter a binary number: ");
    scanf("%lld", &binNum);
    
    printf("1's complement: ");
    while (binNum > 0) {
        int digit = binNum % 10;
        printf("%d", digit == 0 ? 1 : 0); // flip bits
        binNum /= 10;
    }
    printf("\n");
    
    return 0;
}