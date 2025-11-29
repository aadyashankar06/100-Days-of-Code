// Q122 (File Handling)
// Open existing file (info.txt) and read until EOF using fgets().

#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "r");
    if(fp == NULL){
        printf("File not found!\n");
        return 0;
    }

    char line[200];
    while(fgets(line, sizeof(line), fp) != NULL){
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
