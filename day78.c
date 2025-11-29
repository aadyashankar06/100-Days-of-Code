// Q128 (File Handling)
// Count vowels and consonants. Ignore digits & special chars.

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL){
        printf("File doesn't exist!\n");
        return 0;
    }

    int v=0, c=0;
    int ch;
    while((ch = fgetc(fp)) != EOF){
        if(isalpha(ch)){
            char x = tolower(ch);
            if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') v++;
            else c++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", v, c);
    fclose(fp);
    return 0;
}
