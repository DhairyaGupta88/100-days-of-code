//Find the digit that occurs the most in a given integer number.
// For example, in the number 122333, the digit 3 occurs the most (3 times).
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};   // Array to count digit frequencies (0-9)

    printf("Enter an integer number: ");
    scanf("%lld", &num);

    // If number is negative, make it positive
    if (num < 0)
        num = -num;

    // Count frequency of each digit
    while (num > 0) {
        int digit = num % 10;   // extract last digit
        freq[digit]++;          // increase count of that digit
        num = num / 10;         // remove last digit
    }

    // Find digit with maximum frequency
    int maxDigit = 0, maxFreq = freq[0];
    for (int i = 1; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    // Print result
    printf("Digit that occurs the most: %d\n", maxDigit);
    printf("It occurs %d times.\n", maxFreq);

    return 0;
}
