// Q67 (Arrays - 1D)
// Insert an element in an array at a given position.

#include <stdio.h>

int main() {
    int n,pos,x;
    printf("Enter size: "); scanf("%d",&n);
    int a[1000];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter position (0-based) and element: "); scanf("%d %d",&pos,&x);
    if(pos<0 || pos>n){ printf("Invalid position\n"); return 0; }
    for(int i=n-1;i>=pos;i--) a[i+1]=a[i];
    a[pos]=x; n++;
    printf("Array: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
