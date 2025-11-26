// Q55. Write a program to print the following pattern:
//
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>

int main() {
    int n = 4; // half height

    // upper part including middle
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    // lower part
    for (int i = n - 1; i >= 1; i--) {
        for (int s = 0; s < n - i; s++)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
