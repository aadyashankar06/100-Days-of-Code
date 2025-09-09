// Q25: Write a program to make a simple calculator using switch-case.

#include <stdio.h>

int main() {
    float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0)
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero\n");
            break;
        case '%':
            if(num2 != 0)
                printf("%.0f %% %.0f = %.0f\n", num1, num2, (int)num1 % (int)num2);
            else
                printf("Error: Modulo by zero\n");
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}