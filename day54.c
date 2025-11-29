// Q104 (Logic Enhancers)
// Write a Program to take a positive integer n as input, and find the pivot integer x such that
// sum(1..x) == sum(x..n). Print x or -1 if none. At most one pivot exists.
// Follow-up: O(log n) or O(1).

#include <stdio.h>
#include <math.h>

int main(){
    long long n; if(scanf("%lld",&n)!=1) return 0;
    // We derived: x^2 = n*(n+1)/2  => x = sqrt(n*(n+1)/2)
    long double val = (long double)n*(n+1)/2.0L;
    long long x = (long long)floor(sqrt(val) + 0.5L);
    if((long long)x*x == (long long)(n*(n+1)/2)){
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }
    return 0;
}
