// Q129 (File Handling)
// File numbers.txt contains integers separated by spaces. Print sum & average.

#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if(fp == NULL){
        printf("numbers.txt not found!\n");
        return 0;
    }

    int num, count=0;
    long long sum = 0;

    while(fscanf(fp, "%d", &num) == 1){
        sum += num;
        count++;
    }

    fclose(fp);

    if(count == 0){
        printf("No numbers found.\n");
        return 0;
    }

    printf("Sum: %lld\nAverage: %.2f\n", sum, (double)sum/count);
    return 0;
}
