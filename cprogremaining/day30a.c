// Q60. Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    int n, a[100];
    int even = 0, odd = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    if (n > 100) n = 100;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even count = %d, Odd count = %d\n", even, odd);

    return 0;
}
