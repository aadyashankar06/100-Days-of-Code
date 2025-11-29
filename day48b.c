// Q96 (Strings)
// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int i=0;
    while(s[i] && s[i]!='\n'){
        int start=i;
        while(s[i] && s[i] != ' ' && s[i] != '\n') i++;
        for(int j=i-1;j>=start;j--) putchar(s[j]);
        if(s[i]==' ') putchar(' ');
        if(s[i]=='\n' || s[i]==0) break;
        i++;
    }
    putchar('\n');
    return 0;
}
