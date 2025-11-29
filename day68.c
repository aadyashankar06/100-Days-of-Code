// Q118 (Logic Enhancers)
// Array contains all integers from 0 to n except one. Print the missing number.

#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    long long sum = 0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum += a[i];
    }
    long long expected = (long long)n * (n+1) / 2;
    printf("%lld\n", expected - sum);
    return 0;
}
