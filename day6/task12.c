// write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int number;
    printf("enter the number \n");
    scanf("%d", &number);
    if (number >= 0)
    {
        if (number == 0)
        {
            printf("the number is zero\n");
        }
        else
        {
            printf("the number is positive\n");
        }
    }
    else {
        printf("the number is negative\n");
    }
    return 0;
}