// Q102 (Logic Enhancers)
// Write a Program to take a sorted array arr[] and an integer x as input,
// find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
// If such an element does not exist, print -1. In case of multiple occurrences, return first index.
// Follow-up: O(log n)

#include <stdio.h>

int lower_bound(int a[], int n, int key){
    int l=0, r=n;
    while(l<r){
        int m = l + (r-l)/2;
        if(a[m] < key) l = m+1; else r = m;
    }
    return l;
}

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n]; for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int x; scanf("%d",&x);
    int idx = lower_bound(a,n,x);
    if(idx==n) printf("-1\n"); else printf("%d\n", idx);
    return 0;
}
