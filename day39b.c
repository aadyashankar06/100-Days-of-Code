// Q78 (2D Arrays)
// Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int a[n][n], sum=0;
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++) sum += a[i][i];
    printf("Main diagonal sum = %d\n", sum);
    return 0;
}
