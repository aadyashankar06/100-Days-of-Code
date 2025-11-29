// Q107 (Logic Enhancers)
// Write a program to take an array arr[] of integers as input, find previous greater element for each element.
// If none, -1. Print comma separated. Use brute force (nested loops).

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int pg = -1;
        for(int j=i-1;j>=0;j--){
            if(a[j] > a[i]){ pg = a[j]; break; }
        }
        printf("%d", pg);
        if(i!=n-1) printf(","); 
    }
    printf("\n");
    return 0;
}
