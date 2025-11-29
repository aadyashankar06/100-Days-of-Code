// Q81 (Strings)
// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    // remove trailing newline
    int len=0; while(s[len]!='\0') len++;
    if(len>0 && s[len-1]=='\n') len--;
    printf("Length = %d\n", len);
    return 0;
}
