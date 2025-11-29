// Q93 (Strings)
// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[1000], s2[1000];
    fgets(s1,1000,stdin); fgets(s2,1000,stdin);
    int f1[256]={0}, f2[256]={0};
    for(int i=0; s1[i] && s1[i]!='\n'; i++) f1[(unsigned char)s1[i]]++;
    for(int i=0; s2[i] && s2[i]!='\n'; i++) f2[(unsigned char)s2[i]]++;
    if(strcmp((char*)f1,(char*)f2)==0) ; // not usable
    // proper compare:
    int ok=1;
    for(int i=0;i<256;i++) if(f1[i]!=f2[i]) { ok=0; break; }
    if(ok) printf("Anagrams\n"); else printf("Not anagrams\n");
    return 0;
}
