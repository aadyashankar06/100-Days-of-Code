// Q123 (File Handling)
// Count total characters, words, and lines in a file.

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL){
        printf("File not found!\n");
        return 0;
    }

    int chars=0, words=0, lines=0;
    char c, prev=' ';

    while((c = fgetc(fp)) != EOF){
        chars++;

        if(c == '\n') lines++;

        if(!isspace(c) && isspace(prev))
            words++;

        prev = c;
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);

    fclose(fp);
    return 0;
}
