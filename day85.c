// Q135 (Enum)
// Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum Numbers { A=10, B, C, D };

int main(){
    enum Numbers x;
    for(x = A; x <= D; x++){
        printf("%d ", x);
    }
    return 0;
}
