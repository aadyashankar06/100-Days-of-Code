// Q143 (Struct)
// Find and print the student with the highest marks.

#include <stdio.h>

struct Student {
    char name[100];
    int roll;
    float marks;
};

int main() {
    int n;
    scanf("%d", &n);

    struct Student s[n];
    for(int i=0;i<n;i++){
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    int idx = 0;
    for(int i=1;i<n;i++){
        if(s[i].marks > s[idx].marks)
            idx = i;
    }

    printf("Topper: %s %d %.2f\n", s[idx].name, s[idx].roll, s[idx].marks);
    return 0;
}
