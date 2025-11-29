// Q132 (Enum)
// Define an enum for traffic lights (RED, YELLOW, GREEN)
// Print 'Stop', 'Wait', or 'Go' based on its value.

#include <stdio.h>

enum Traffic { RED, YELLOW, GREEN };

int main() {
    enum Traffic signal;
    scanf("%d", &signal); // input 0,1,2

    if(signal == RED) printf("Stop\n");
    else if(signal == YELLOW) printf("Wait\n");
    else if(signal == GREEN) printf("Go\n");
    else printf("Invalid\n");

    return 0;
}
