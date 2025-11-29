// Q111 (Logic Enhancers)
// Write a program to take an integer array arr and an integer k as inputs.
// For each subarray of size k, print the first negative integer. If none, print 0.
// Print results separated by spaces.

#include <stdio.h>

int main() {
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);

    for(int i=0; i <= n-k; i++) {
        int found = 0;
        for(int j=i; j<i+k; j++) {
            if(a[j] < 0) {
                printf("%d ", a[j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("0 ");
    }
    return 0;
}
