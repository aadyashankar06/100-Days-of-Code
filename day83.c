// Q133 (Enum)
// Create an enum for months & print how many days each month has.

#include <stdio.h>

enum Months {
    JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Months m;
    scanf("%d", &m);

    switch(m){
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n"); break;

        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n"); break;

        case FEB:
            printf("28/29 days\n"); break;

        default:
            printf("Invalid\n");
    }
    return 0;
}
