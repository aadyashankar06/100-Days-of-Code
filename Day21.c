// Q42. Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n, first, last, temp, pow10 = 1, mid;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        pow10 *= 10;
    }
    first = temp;

    // If number is single digit
    if (pow10 == 1) {
        printf("Result: %d\n", n);
        return 0;
    }

    mid = (n % pow10) / 10;         // remove first and last
    int result = last * pow10 + mid * 10 + first;

    printf("After swapping first and last digit: %d\n", result);

    return 0;
}
