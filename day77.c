// Q127 (File Handling)
// Read input.txt, convert lowercase to uppercase, write to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    if(in == NULL){
        printf("input.txt not found!\n");
        return 0;
    }

    FILE *out = fopen("output.txt", "w");
    if(out == NULL){
        printf("Error opening output.txt!\n");
        fclose(in);
        return 0;
    }

    int ch;
    while((ch = fgetc(in)) != EOF){
        if(ch >= 'a' && ch <= 'z') ch = ch - ('a' - 'A');
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Conversion done.\n");
    return 0;
}
