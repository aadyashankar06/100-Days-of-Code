// Q120 (File Handling)
// Take a string and convert it to sentence case. (First letter uppercase, rest lowercase)

#include <stdio.h>
#include <ctype.h>

int main(){
    char s[1000];
    fgets(s,1000,stdin);

    int i=0;
    // Skip leading spaces
    while(s[i]==' ') i++;

    if(s[i]>='a' && s[i]<='z') s[i] -= ('a'-'A');

    for(int j=i+1; s[j]; j++){
        if(s[j]>='A' && s[j]<='Z') s[j] += ('a'-'A');
    }

    printf("%s", s);
    return 0;
}
