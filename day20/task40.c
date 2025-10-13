//Write a program to find the 1’s complement of a binary number and print it.
//The 1’s complement of a binary number is obtained by flipping all the bits, changing 0s to 1s and 1s to 0s.
#include<stdio.h>
int main()
{
    int n, digit, onescomplement=0, placevalue=1;
    printf("enter the binary number:");//prompt for user input
    scanf("%d", &n);//read the input binary number
    while(n!=0)//loop until n becomes 0
    {
        digit=n%10;//extract the last digit of n
        if(digit==0)//if the digit is 0, change it to 1
            onescomplement+=1*placevalue;
        //if the digit is 1, change it to 0 (do nothing)
        n=n/10;//remove the last digit from n
        placevalue*=10;//update the place value for the next digit
    }
    printf("1's complement is %d", onescomplement);//print the 1's complement
    return 0;
}