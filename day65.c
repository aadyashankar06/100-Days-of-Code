// Q115 (Logic Enhancers)
// Given two lowercase strings s and t, check if they are anagrams.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000], t[1000];
    fgets(s,1000,stdin);
    fgets(t,1000,stdin);

    int f1[26]={0}, f2[26]={0};

    for(int i=0; s[i] && s[i]!='\n'; i++) f1[s[i]-'a']++;
    for(int i=0; t[i] && t[i]!='\n'; i++) f2[t[i]-'a']++;

    for(int i=0;i<26;i++){
        if(f1[i] != f2[i]){
            printf("Not Anagram\n");
            return 0;
        }
    }
    printf("Anagram\n");
    return 0;
}
