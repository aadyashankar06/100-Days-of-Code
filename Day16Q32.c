// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0) return rev;
    rev = rev * 10 + n % 10;
    return reverseNum(n / 10, rev);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int reversed = reverseNum(num, 0);
    if (num == reversed) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}