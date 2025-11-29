// Q99 (Strings)
// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    fgets(s,100,stdin);
    // expects format dd/mm/yyyy
    int d,m,y;
    if(sscanf(s,"%d/%d/%d",&d,&m,&y)!=3){ printf("Invalid\n"); return 0; }
    char *mons[] = {"","Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    printf("%02d-%s-%04d\n", d, mons[m], y);
    return 0;
}
