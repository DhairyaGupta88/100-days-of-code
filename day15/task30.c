//Write a program to reverse a given number.
#include <stdio.h>
int main() 
{
    int n, reversed = 0; //n is the number to be reversed, reversed will hold the reversed number
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    while(n != 0) //loop to reverse the number
    {
        int digit = n % 10; //get the last digit of n
        reversed = reversed * 10 + digit; //append the digit to the reversed number
        n /= 10; //remove the last digit from n
    }
    printf("The reversed number is: %d\n", reversed); //print the result
    return 0;
}