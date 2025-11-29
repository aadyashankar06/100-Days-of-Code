// Q101 (Logic Enhancers)
// Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
// The elements in the sorted array might be repeated. You need to print the first and last occurrence
// of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
// Follow-up(optional): Can you do it in O(log n) Time Complexity?

#include <stdio.h>

int lower_bound(int a[], int n, int key){
    int l=0, r=n;
    while(l<r){
        int m = l + (r-l)/2;
        if(a[m] < key) l = m+1; else r = m;
    }
    return l;
}

int upper_bound(int a[], int n, int key){
    int l=0, r=n;
    while(l<r){
        int m = l + (r-l)/2;
        if(a[m] <= key) l = m+1; else r = m;
    }
    return l;
}

int main(){
    int n; 
    if(scanf("%d", &n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int target; scanf("%d",&target);

    int l = lower_bound(a,n,target);
    if(l==n || a[l]!=target){
        printf("-1 -1\n");
    } else {
        int r = upper_bound(a,n,target)-1;
        printf("%d %d\n", l, r);
    }
    return 0;
}
