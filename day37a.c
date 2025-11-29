// Q73 (2D Arrays)
// Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    int m[r][c], rowSum[r];
    for(int i=0;i<r;i++){
        rowSum[i]=0;
        for(int j=0;j<c;j++){ scanf("%d",&m[i][j]); rowSum[i]+=m[i][j]; }
    }
    printf("Row sums: ");
    for(int i=0;i<r;i++) printf("%d ", rowSum[i]);
    return 0;
}
