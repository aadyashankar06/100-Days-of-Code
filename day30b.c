// Q61. Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    int n, a[100];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n > 100) n = 100;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
        else zero++;
    }

    printf("Positive = %d, Negative = %d, Zero = %d\n", pos, neg, zero);

    return 0;
}
