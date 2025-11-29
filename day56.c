// Q106 (Logic Enhancers)
// Write a program to take an array arr[] of integers as input, the task is to find the next greater element
// for each element (nearest on right). If none, -1. Print comma separated. Use brute force (nested loops).

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        int ng = -1;
        for(int j=i+1;j<n;j++){
            if(a[j] > a[i]){ ng = a[j]; break; }
        }
        printf("%d", ng);
        if(i!=n-1) printf(","); 
    }
    printf("\n");
    return 0;
}
