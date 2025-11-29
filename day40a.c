// Q79 (2D Arrays)
// Perform diagonal traversal of a matrix.

#include <stdio.h>

int main(){
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++) for(int j=0;j<c;j++) scanf("%d",&a[i][j]);

    // Traverse starting from first row
    for(int start=0; start<c; start++){
        int i=0, j=start;
        while(i<r && j>=0){ printf("%d ", a[i][j]); i++; j--; }
        printf("\n");
    }
    // Then starting from second row
    for(int start=1; start<r; start++){
        int i=start, j=c-1;
        while(i<r && j>=0){ printf("%d ", a[i][j]); i++; j--; }
        printf("\n");
    }
    return 0;
}
