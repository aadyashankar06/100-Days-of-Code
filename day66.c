// Q116 (Logic Enhancers)
// Given array nums and target, print indices i and j such that nums[i]+nums[j]=target.
// Exactly one solution exists. If not found, print "-1 -1".

#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int target; scanf("%d",&target);

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i] + a[j] == target){
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
