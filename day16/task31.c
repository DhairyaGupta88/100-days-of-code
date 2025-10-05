//Write a program to take a number as input and print its equivalent binary representation
#include <stdio.h>
int main() 
{
    int n; //n is the number to be converted to binary
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if(n == 0) //if the number is 0, its binary representation is also 0
    {
        printf("The binary representation is: 0\n");
        return 0;
    }
    int binary[32]; //array to hold the binary digits, assuming a maximum of 32 bits for an integer
    int index = 0; //index to keep track of the number of binary digits
    while(n > 0) //loop to convert the number to binary
    {
        binary[index] = n % 2; //get the last binary digit (0 or 1)
        n /= 2; //divide n by 2 to remove the last binary digit
        index++; //increment the index
    }
    printf("The binary representation is: ");
    for(int i = index - 1; i >= 0; i--) //print the binary digits in reverse order
    {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}