// Q121 (File Handling)
// Create a text file info.txt in write mode. Take user's name and age, write using fprintf().

#include <stdio.h>

int main() {
    FILE *fp = fopen("info.txt", "w");
    if(fp == NULL){
        printf("Error opening file!\n");
        return 0;
    }

    char name[100];
    int age;

    printf("Enter name: ");
    scanf("%[^\n]", name);

    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);

    fclose(fp);
    printf("Data successfully saved.\n");
    return 0;
}
