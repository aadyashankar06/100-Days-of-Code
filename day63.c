// Q113 (Logic Enhancers)
// Take array arr and integer k. Print kth smallest element.

#include <stdio.h>

void sort(int a[], int n){
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(a[j] > a[j+1]){
                int t=a[j]; a[j]=a[j+1]; a[j+1]=t;
            }
}

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);

    sort(a,n);
    if(k>=1 && k<=n) printf("%d\n", a[k-1]);
    else printf("-1\n");
    return 0;
}
