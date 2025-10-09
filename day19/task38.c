//write a program to find the sum of digits of a number.
//The sum of digits of a number is the total value obtained by adding all the individual digits of that number. 
#include<stdio.h>
int main()
{
    int n, sum=0,digit;
    printf("enter the number:");//prompt for user input
    scanf("%d", &n);//read the input number
    while(n!=0)//loop until n becomes 0
    {
        digit=n%10;//extract the last digit of n
        sum=sum+digit;//add the digit to sum
        n=n/10;//remove the last digit from n
    }
    printf("sum of digits is %d", sum);//print the sum of digits
    return 0;
}