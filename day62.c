// Q112 (Logic Enhancers)
// Find the maximum sum of any contiguous subarray using Kadane's algorithm.
// If all elements are negative, print the largest element.

#include <stdio.h>
#include <limits.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);

    int max_so_far = a[0], curr = a[0];
    for(int i=1;i<n;i++){
        curr = (a[i] > curr + a[i]) ? a[i] : curr + a[i];
        if(curr > max_so_far) max_so_far = curr;
    }
    printf("%d\n", max_so_far);
    return 0;
}
