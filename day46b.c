// Q92 (Strings)
// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int freq[26]={0};
    for(int i=0; s[i] && s[i]!='\n'; i++){
        if(s[i]>='a' && s[i]<='z'){
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']==2){ printf("%c\n", s[i]); return 0; }
        }
    }
    printf("No repeating lowercase alphabet\n");
    return 0;
}
