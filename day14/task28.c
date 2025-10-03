//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>
int main() 
{
    int n, i; //n is the upper limit, i is the loop variable
    long long product = 1; //product is initialized to 1 (use long long to handle large products)
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i += 2) //loop to calculate the product of even numbers from 1 to n
    {
        product *= i; //multiply the current even number to product
    }
    printf("The product of even numbers from 1 to %d is: %lld\n", n, product); //print the result
    return 0;
}