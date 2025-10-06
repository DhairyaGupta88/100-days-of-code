// Write a program to check if a number is prime.
// A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) // Check if the number is less than or equal to 1
    {
        printf("%d is not a prime number.\n", n);
        return 0;
    }
    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0) // Check if n is divisible by i
        {
            printf("%d is not a prime number.\n", n);
            return 0;
        }
        else
        {
            printf("%d is a prime number.\n", n);
        }
        return 0;
    }
}