// Q103 (Logic Enhancers)
// Write a Program to take an array of integers as input, calculate the pivot index of this array.
// Print the leftmost pivot index. If no such index exists, print -1.
// Follow-up: O(n)

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    long long a[n], total=0, left=0;
    for(int i=0;i<n;i++){ scanf("%lld",&a[i]); total += a[i]; }
    for(int i=0;i<n;i++){
        if(left == total - left - a[i]){ printf("%d\n", i); return 0; }
        left += a[i];
    }
    printf("-1\n");
    return 0;
}
