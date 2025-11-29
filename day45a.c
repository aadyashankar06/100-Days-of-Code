// Q89 (Strings)
// Count frequency of a given character in a string.

#include <stdio.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    char ch; scanf(" %c",&ch);
    int cnt=0;
    for(int i=0; s[i] && s[i]!='\n'; i++) if(s[i]==ch) cnt++;
    printf("Frequency = %d\n", cnt);
    return 0;
}
