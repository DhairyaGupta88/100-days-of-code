#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get last digit
    digits = (int)log10(num);  // Count total digits - 1
    firstDigit = num / pow(10, digits);  // Get first digit

    // Remove the first and last digits from the original number
    int middlePart = num % (int)pow(10, digits);  
    middlePart = middlePart / 10;

    // Swap first and last digits
    swappedNum = lastDigit * pow(10, digits) + (middlePart * 10) + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}

