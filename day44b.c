// Q88 (Strings)
// Replace spaces with hyphens in a string.

#include <stdio.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    for(int i=0; s[i]; i++){
        if(s[i]==' ') s[i]='-';
    }
    printf("%s", s);
    return 0;
}
