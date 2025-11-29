// Q90 (Strings)
// Toggle case of each character in a string.

#include <stdio.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    for(int i=0; s[i] && s[i]!='\n'; i++){
        if(s[i]>='a' && s[i]<='z') s[i] = s[i]-('a'-'A');
        else if(s[i]>='A' && s[i]<='Z') s[i] = s[i]+('a'-'A');
    }
    printf("%s", s);
    return 0;
}
