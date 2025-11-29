// Q70 (Arrays - 1D)
// Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int n,k; printf("Enter size: "); scanf("%d",&n);
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter k: "); scanf("%d",&k);
    k = k % n;
    // Reverse helper
    void rev(int arr[], int l, int r){
        while(l<r){ int t=arr[l]; arr[l]=arr[r]; arr[r]=t; l++; r--; }
    }
    rev(a,0,n-1);
    rev(a,0,k-1);
    rev(a,k,n-1);
    printf("Rotated array: ");
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}
