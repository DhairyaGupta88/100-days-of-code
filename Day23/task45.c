//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
//Formula for nth term: (2*n)/(3 + 4*(n-1))
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0; // Initialize sum as float to hold decimal values

    printf("Enter the number of terms: "); // Input number of terms
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {// Loop from 1 to n
        sum += (2.0 * i) / (3 + 4 * (i - 1));// Calculate each term and add to sum
    }

    printf("The sum of the series is: %.2f\n", sum); // Print the sum with 2 decimal places 
    return 0;
}
