// Q124 (File Handling)
// Copy content from source file to destination file using fgetc() and fputc().

#include <stdio.h>

int main() {
    char src[100], dest[100];
    scanf("%s %s", src, dest);

    FILE *fs = fopen(src, "r");
    if(fs == NULL){
        printf("Source file not found!\n");
        return 0;
    }

    FILE *fd = fopen(dest, "w");
    if(fd == NULL){
        printf("Error creating destination file!\n");
        fclose(fs);
        return 0;
    }

    int ch;
    while((ch = fgetc(fs)) != EOF){
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully.\n");
    return 0;
}
