// Q94 (Strings)
// Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int maxlen=0, curlen=0, start=0, maxstart=0;
    for(int i=0; s[i] && s[i]!='\n'; i++){
        if(s[i]!=' '){ if(curlen==0) start=i; curlen++; }
        if(s[i]==' ' || s[i+1]=='\0' || s[i+1]=='\n'){
            if(curlen>maxlen){ maxlen=curlen; maxstart=start; }
            curlen=0;
        }
    }
    char word[1000]; strncpy(word, s+maxstart, maxlen); word[maxlen]='\0';
    printf("Longest word: %s\n", word);
    return 0;
}
