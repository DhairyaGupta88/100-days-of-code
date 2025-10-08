//Write a program to print all factors of a given number.
//A factor of a number is an integer which divides that number completely (i.e., without leaving a remainder).
#include <stdio.h>
int main()
{ 
    int n, i;
    printf("enter the number:");//prompt for user input
    for(i=1; i<=n; i++)//loop from 1 to n
    {
        if(n%i==0)//check if i is a factor of n
        {
            printf("%d\n", i);//print the factor
        }
    }
    return 0;
}
