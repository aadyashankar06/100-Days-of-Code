// Q66 (Arrays - 1D)
// Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter current size: "); scanf("%d",&n);
    int a[1000];
    printf("Enter %d sorted elements: ", n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to insert: "); scanf("%d",&x);

    int i = n-1;
    while(i>=0 && a[i] > x) { a[i+1] = a[i]; i--; }
    a[i+1] = x;
    n++;
    printf("Array after insertion: ");
    for(int j=0;j<n;j++) printf("%d ", a[j]);
    return 0;
}
