// Q86 (Strings)
// Check if a string is a palindrome.

#include <stdio.h>
#include <ctype.h>
int main(){
    char s[1000]; fgets(s,1000,stdin);
    int i=0,j=0;
    while(s[j] && s[j]!='\n') j++;
    j--;
    int ok=1;
    while(i<j){
        if(s[i++] != s[j--]){ ok=0; break; }
    }
    if(ok) printf("Palindrome\n"); else printf("Not palindrome\n");
    return 0;
}
