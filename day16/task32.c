//Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() 
{
    int n, original, reversed = 0; //n is the number to be checked, original will hold the original number, reversed will hold the reversed number
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    original = n; //store the original number
    while(n != 0) //loop to reverse the number
    {
        int digit = n % 10; //get the last digit of n
        reversed = reversed * 10 + digit; //append the digit to the reversed number
        n /= 10; //remove the last digit from n
    }
    if(original == reversed) //check if the original number is equal to the reversed number
    {
        printf("The number is a palindrome.\n"); //if they are equal, it's a palindrome
    }
    else
    {
        printf("The number is not a palindrome.\n"); //if they are not equal, it's not a palindrome
    }
    return 0;
}