// Q58. Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, a[100], sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n > 100) n = 100;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    printf("Sum of elements = %d\n", sum);

    return 0;
}
