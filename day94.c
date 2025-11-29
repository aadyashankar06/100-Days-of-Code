// Q144 (Struct)
// Write a function that accepts a structure as parameter and prints its members.

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student s;
    scanf("%s %d %f", s.name, &s.roll, &s.marks);
    printStudent(s);
    return 0;
}
