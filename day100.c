// Q150 (Enum / Struct & Pointers)
// Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    struct Student s;        // normal structure variable
    struct Student *ptr = &s;  // pointer to struct

    // Input values using -> operator
    scanf("%s", ptr->name);
    scanf("%d", &ptr->roll);
    scanf("%f", &ptr->marks);

    // Modify values using -> operator
    ptr->marks = ptr->marks + 5;   // adding +5 bonus marks
    ptr->roll = ptr->roll + 1;     // increment roll for demo

    // Display using -> operator
    printf("Updated Name: %s\n", ptr->name);
    printf("Updated Roll: %d\n", ptr->roll);
    printf("Updated Marks: %.2f\n", ptr->marks);

    return 0;
}
