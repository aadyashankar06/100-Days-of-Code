// Q146 (Struct)
// Create Employee structure with nested Date structure for joining date and print details.

#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    char name[100];
    int id;
    struct Date join;
};

int main() {
    struct Employee e;

    scanf("%s %d %d %d %d", 
        e.name, &e.id, &e.join.day, &e.join.month, &e.join.year);

    printf("Name: %s\nID: %d\nJoining Date: %02d-%02d-%04d\n",
           e.name, e.id, e.join.day, e.join.month, e.join.year);

    return 0;
}
