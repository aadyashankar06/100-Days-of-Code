// Q125 (File Handling)
// Open existing file in append mode and add a new line.

#include <stdio.h>

int main() {
    char filename[100];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if(fp == NULL){
        printf("File not found!\n");
        return 0;
    }

    char text[200];
    getchar(); // consume newline
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}
