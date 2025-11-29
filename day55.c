// Q105 (Logic Enhancers)
// Write a program to take an integer array nums of size n, and print the majority element
// (appears strictly more than floor(n/2) times). Print -1 if no such element exists.

#include <stdio.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0;
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int candidate=0, cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){ candidate=a[i]; cnt=1; }
        else if(a[i]==candidate) cnt++;
        else cnt--;
    }
    // verify
    int occ=0;
    for(int i=0;i<n;i++) if(a[i]==candidate) occ++;
    if(occ > n/2) printf("%d\n", candidate); else printf("-1\n");
    return 0;
}
