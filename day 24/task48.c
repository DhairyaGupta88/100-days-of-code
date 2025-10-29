//Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>  
int main()
{
    int i,j; //loop counters
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            if(j<=i) //check if column number is less than or equal to row number
            {
                printf("%d",j); //print column number
            }
        }
        printf("\n");
    }
    return 0;
}
