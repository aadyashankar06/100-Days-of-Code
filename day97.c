// Q147 (Struct)
// Store employee data in a binary file using fwrite() and read using fread().

#include <stdio.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main(){
    struct Employee e;
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    FILE *fp = fopen("emp.bin", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    FILE *fp2 = fopen("emp.bin", "rb");
    struct Employee temp;
    fread(&temp, sizeof(temp), 1, fp2);
    fclose(fp2);

    printf("Name: %s\nID: %d\nSalary: %.2f\n", temp.name, temp.id, temp.salary);
    return 0;
}
