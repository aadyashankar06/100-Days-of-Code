// Q139 (Enum)
// Show that enums store integers by printing assigned values.

#include <stdio.h>

enum Demo { X=5, Y, Z=20, W };

int main(){
    printf("%d %d %d %d\n", X, Y, Z, W);  
    return 0;
}
