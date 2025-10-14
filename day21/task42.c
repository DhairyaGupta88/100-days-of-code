//Write a program to check if a number is a perfect number.
//A perfect number is a positive integer that is equal to the sum of its proper positive divisors, excluding the number itself.
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("enter a number:");//prompt for user input
    scanf("%d", &n);//read the input number
    for(int i=1; i<=n/2; i++)//loop from 1 to n/2 to find divisors
    {
        if(n%i==0)//if i is a divisor of n
            sum+=i;//add it to the sum of divisors
    }
    if(sum==n)//check if the sum of divisors equals the original number
        printf("%d is a perfect number", n);//print if it is a perfect number
    else
        printf("%d is not a perfect number", n);//print if it is not a perfect number
    return 0;
}