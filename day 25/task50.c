//Write a program to print the following pattern:
//*****
// ****
//  ***
//   **
//    *
#include <stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++) //loop for rows
    {
        for(j=1;j<=5;j++) //loop for columns
        {
            if(j>=i) //check if column number is greater than or equal to row number
            {
                printf("*"); //print star
            }
            else
            {
                printf(" "); //print space
            }
        }
        printf("\n"); //move to next line after each row
    }
    return 0; //indicate successful termination 
}