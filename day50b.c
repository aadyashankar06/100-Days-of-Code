// Q100 (Strings)
// Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int n = strcspn(s,"\n"); s[n]=0;
    for(int i=0;i<n;i++){
        for(int len=1; i+len<=n; len++){
            for(int k=0;k<len;k++) putchar(s[i+k]);
            putchar('\n');
        }
    }
    return 0;
}
