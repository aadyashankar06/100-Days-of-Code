// Q85 (Strings)
// Reverse a string.

#include <stdio.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    int len=0; while(s[len] && s[len]!='\n') len++;
    for(int i=len-1;i>=0;i--) putchar(s[i]);
    putchar('\n');
    return 0;
}
