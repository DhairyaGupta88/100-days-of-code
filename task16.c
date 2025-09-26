// Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    //// Input three numbers
    printf("enter the number:\n");
    scanf("%d %d %d", &a,&b,&c);
    // Check if all three are equal
    if (a == b && b == c)
    {
        printf("the numbers are equal\n");
    }
    // Check if a is largest
    else if (a >= b && a >= c)
    {
        printf("%d digit is a largest number\n", a);
    }
    // Check if b is largest
    else if (b >= a && b >= c)
    {
        printf("%d is a largest number\n", b);
    }
    // Otherwise c is largest
    else
    {
        printf("%d is a largest number\n", c);
    }
    return 0;
}