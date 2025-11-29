// Q76 (2D Arrays)
// Check if a matrix is symmetric.

#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n][n], flag=1;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) if(a[i][j] != a[j][i]) flag=0;
    if(flag) printf("Symmetric\n"); else printf("Not symmetric\n");
    return 0;
}
