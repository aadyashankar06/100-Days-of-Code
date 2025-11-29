// Q95 (Strings)
// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main(){
    char s1[1000], s2[1000];
    fgets(s1,1000,stdin); fgets(s2,1000,stdin);
    int n1=strcspn(s1,"\n"), n2=strcspn(s2,"\n");
    s1[n1]=0; s2[n2]=0;
    if(n1!=n2){ printf("Not rotation\n"); return 0; }
    char cat[2000]; strcpy(cat, s1); strcat(cat, s1);
    if(strstr(cat, s2)) printf("Rotation\n"); else printf("Not rotation\n");
    return 0;
}
