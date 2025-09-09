// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        count++;
        n /= 10;
    }
    return count;
}

int isArmstrong(int n) {
    int original = n, sum = 0, digits = countDigits(n);
    while (n != 0) {
        sum += pow(n % 10, digits);
        n /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}