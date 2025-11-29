// Q97 (Strings)
// Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int i=0;
    while(s[i] && s[i]!='\n'){
        if(i==0 && !isspace(s[i])) { printf("%c.", toupper(s[i])); }
        if(s[i]==' ' && s[i+1] && !isspace(s[i+1])) printf("%c.", toupper(s[i+1]));
        i++;
    }
    printf("\n");
    return 0;
}
