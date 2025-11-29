// Q72 (2D Arrays)
// Find the sum of all elements in a matrix.

#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    int m[r][c], sum=0;
    for(int i=0;i<r;i++) for(int j=0;j<c;j++){ scanf("%d",&m[i][j]); sum+=m[i][j]; }
    printf("Sum = %d\n", sum);
    return 0;
}
