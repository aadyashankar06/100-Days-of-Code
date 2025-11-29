// Q130 (File Handling)
// Store multiple student records (name, roll, marks) using fprintf()
// Then read them using fscanf() and display.

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main(){
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);

    FILE *fp = fopen("students.txt", "w");
    if(fp == NULL){
        printf("Error creating file!\n");
        return 0;
    }

    struct Student s;

    for(int i=0;i<n;i++){
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", s.name, &s.roll, &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    printf("\nStored Records:\n");

    while(fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3){
        printf("%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}
