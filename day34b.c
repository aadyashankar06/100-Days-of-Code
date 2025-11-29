// Q68 (Arrays - 1D)
// Delete an element from an array.

#include <stdio.h>

int main() {
    int n,key;
    printf("Enter size: "); scanf("%d",&n);
    int a[1000];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to delete: "); scanf("%d",&key);

    int idx = -1;
    for(int i=0;i<n;i++) if(a[i]==key){ idx=i; break; }
    if(idx==-1){ printf("Element not found\n"); return 0; }
    for(int i=idx;i<n-1;i++) a[i]=a[i+1];
    n--;
    printf("Array after deletion: ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}
