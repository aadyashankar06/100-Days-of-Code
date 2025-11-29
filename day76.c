// Q126 (File Handling)
// Ask user for a filename and check if it exists.

#include <stdio.h>

int main() {
    char filename[100];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "r");
    if(fp == NULL){
        printf("Error: File does not exist!\n");
    } else {
        char line[300];
        while(fgets(line, sizeof(line), fp))
            printf("%s", line);
        fclose(fp);
    }
    return 0;
}
