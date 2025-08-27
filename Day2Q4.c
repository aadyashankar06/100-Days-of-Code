// Day2 Q4
// Write a C program to calculate area and circumference of a circle.

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}