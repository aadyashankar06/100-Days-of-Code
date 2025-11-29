// Q108 (Logic Enhancers)
// Given integer array nums, print array answer where answer[i] = product of all elements except nums[i].
// Do it O(n) without division.

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long long left[n], right[n];
    left[0]=1;
    for(int i=1;i<n;i++) left[i] = left[i-1] * (long long)a[i-1];
    right[n-1]=1;
    for(int i=n-2;i>=0;i--) right[i] = right[i+1] * (long long)a[i+1];
    for(int i=0;i<n;i++){
        long long ans = left[i] * right[i];
        printf("%lld", ans);
        if(i!=n-1) printf(" ");
    }
    printf("\n");
    return 0;
}
