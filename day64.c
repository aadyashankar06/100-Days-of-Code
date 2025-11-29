// Q114 (Logic Enhancers)
// Given a string s, print length of longest substring without repeating characters.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int last[256];
    for(int i=0;i<256;i++) last[i] = -1;

    int maxLen = 0, start = 0;

    for(int i=0; s[i] && s[i]!='\n'; i++){
        if(last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;
        last[(unsigned char)s[i]] = i;
        int len = i - start + 1;
        if(len > maxLen) maxLen = len;
    }
    printf("%d\n", maxLen);
    return 0;
}
