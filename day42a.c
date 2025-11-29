// Q83 (Strings)
// Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    int v=0,c=0;
    for(int i=0; s[i] && s[i]!='\n'; i++){
        char ch = tolower(s[i]);
        if(ch>='a' && ch<='z'){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++; else c++;
        }
    }
    printf("Vowels=%d Consonants=%d\n", v, c);
    return 0;
}
