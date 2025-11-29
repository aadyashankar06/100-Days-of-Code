// Q91 (Strings)
// Remove all vowels from a string.

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    char out[1000]; int k=0;
    for(int i=0; s[i] && s[i]!='\n'; i++){
        char c = tolower(s[i]);
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')) out[k++]=s[i];
    }
    out[k]='\0'; printf("%s\n", out);
    return 0;
}
