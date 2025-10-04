//Write a program to calculate the factorial of a number.
#include <stdio.h>
int main() 
{
    int n, i; //n is the number to calculate factorial for, i is the loop variable
    long long factorial = 1; //factorial is initialized to 1 (use long long to handle large factorials)
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) //loop to calculate the factorial of n
    {
        factorial *= i; //multiply the current number to factorial
    }
    printf("The factorial of %d is: %lld\n", n, factorial); //print the result
    return 0;
}