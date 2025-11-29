// Q141 (Struct)
// Define a structure Student with name, roll_no, and marks, then read and print one student's data.

#include <stdio.h>

struct Student {
    char name[100];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    scanf("%s", s.name);
    scanf("%d", &s.roll_no);
    scanf("%f", &s.marks);

    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
