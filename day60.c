// Q110 (Logic Enhancers)
// Given array arr and integer k. Find maximum element in each subarray (window) of size k from left to right.
// Print maxima separated by spaces.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int *a = malloc(n * sizeof(int));
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int k; scanf("%d",&k);
    if(k>n){ printf("\n"); free(a); return 0; }

    int *dq = malloc(n * sizeof(int)); // store indices
    int head=0, tail=-1;

    for(int i=0;i<n;i++){
        // remove indices out of window
        while(head<=tail && dq[head] <= i-k) head++;
        // remove smaller elements from tail
        while(head<=tail && a[dq[tail]] <= a[i]) tail--;
        dq[++tail] = i;
        if(i >= k-1){
            printf("%d", a[dq[head]]);
            if(i != n-1) printf(" ");
        }
    }
    printf("\n");
    free(a); free(dq);
    return 0;
}
