// Q98 (Strings)
// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[1000]; fgets(s,1000,stdin);
    int len=strcspn(s,"\n"); s[len]=0;
    // find last space
    int last=-1;
    for(int i=0;i<len;i++) if(s[i]==' ') last=i;
    if(last==-1){ printf("%s\n", s); return 0; }
    // print initials of everything before last space
    for(int i=0;i<last;i++){
        if(i==0 || (s[i-1]==' ' && s[i]!=' ')) { printf("%c.", toupper(s[i])); }
    }
    printf(" ");
    printf("%s\n", s+last+1);
    return 0;
}
