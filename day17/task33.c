//Write a program to check if a number is an Armstrong number
//An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits
#include <stdio.h>
#include <math.h>  // For pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;// Initialize result

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    for (int temp = num; temp != 0; temp /= 10) {
        n++;
    }

    // Calculate sum of powers of digits
    for (int temp = num; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, n);
    }

    // Check if Armstrong number
    if ((int)result == originalNum)
        printf("%d is an Armstrong number.\n", originalNum);
    else
        printf("%d is not an Armstrong number.\n", originalNum);

    return 0;
}
