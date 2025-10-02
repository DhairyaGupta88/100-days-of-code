//Write a program to print numbers from 1 to n.
#include <stdio.h>
int main()
{
    int n, i;//n is the number up to which we want to print numbers
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)//loop to print numbers from 1 to n
    {
        printf("%d\n", i); //print the current number
    }
    return 0;
}