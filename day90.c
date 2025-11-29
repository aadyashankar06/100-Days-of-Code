// Q140 (Enum)
// Define a struct with enum Gender and print person's gender.

#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[100];
    enum Gender g;
};

int main(){
    struct Person p;

    scanf("%s", p.name);
    scanf("%d", (int*)&p.g);  // 0=MALE, 1=FEMALE, 2=OTHER

    printf("Name: %s\n", p.name);

    if(p.g == MALE) printf("Gender: Male\n");
    else if(p.g == FEMALE) printf("Gender: Female\n");
    else printf("Gender: Other\n");

    return 0;
}
