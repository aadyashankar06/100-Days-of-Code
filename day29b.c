// Q59. Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, a[100];
    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("Invalid size.\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0], min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    printf("Max = %d, Min = %d\n", max, min);

    return 0;
}
