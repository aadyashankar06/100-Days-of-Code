// Q45. Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int num = 1, den = 1;

    printf("Enter number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0; // first term is 1
        } else {
            num = 2 * i - 1;
            den = 2 * i;
            sum += (double)num / den;
        }
    }

    printf("Sum of series = %.4lf\n", sum);

    return 0;
}
