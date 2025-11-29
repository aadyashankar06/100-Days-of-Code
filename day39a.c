// Q77 (2D Arrays)
// Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    int seen[n]; for(int i=0;i<n;i++) seen[i]=0;
    int ok=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i][i] == a[j][j]) { ok=0; break; }
        }
        if(!ok) break;
    }
    if(ok) printf("Diagonal distinct\n"); else printf("Not distinct\n");
    return 0;
}
