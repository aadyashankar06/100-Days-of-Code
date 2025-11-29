// Q138 (Enum)
// Print all enum names and values using a loop.

#include <stdio.h>

enum Items { ITEM1, ITEM2, ITEM3, ITEM4, ITEM5 };

int main() {
    for(enum Items x = ITEM1; x <= ITEM5; x++){
        printf("Value: %d\n", x);
    }
    return 0;
}
