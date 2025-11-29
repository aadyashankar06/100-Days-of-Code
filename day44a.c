// Q87 (Strings)
// Count spaces, digits, and special characters in a string.

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    int spaces=0,digits=0,special=0;
    for(int i=0; s[i] && s[i]!='\n'; i++){
        if(s[i]==' ') spaces++;
        else if(isdigit((unsigned char)s[i])) digits++;
        else if(isalpha((unsigned char)s[i])) {}
        else special++;
    }
    printf("Spaces=%d Digits=%d Special=%d\n", spaces, digits, special);
    return 0;
}
