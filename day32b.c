// Q64 (Arrays - 1D)
// Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};
    int digit, maxFreq = 0, mostFreqDigit = 0;

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    if (num < 0) {
        num = -num; // make number positive
    }

    // Counting digit frequency
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            mostFreqDigit = i;
        }
    }

    printf("Digit occurring the most times: %d\n", mostFreqDigit);
    printf("Occurrences: %d\n", maxFreq);

    return 0;
}
