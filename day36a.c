// Q71 (2D Arrays)
// Read and print a matrix.

#include <stdio.h>

int main(){
    int r,c; printf("Rows and cols: "); scanf("%d %d",&r,&c);
    int m[r][c];
    printf("Enter elements:\n");
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&m[i][j]);
    printf("Matrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}
