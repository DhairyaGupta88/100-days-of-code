//Write a program to print the following pattern:
//    5
//   45
//  345
// 2345
//12345
#include <stdio.h>  
int main()
{
    int i,j,space; //loop counters
    for (i=5;i>=1;i--) //loop for rows
    {
        for(space=1;space<i;space++) //loop for spaces
        {
            printf(" "); //print space
        }
        for (j=1;j<=5;j++) //loop for columns
        {
            if(j>=i) //check if column number is greater than or equal to row number
            {
                printf("%d",j); //print column number
            }
        }
        printf("\n");
    }
    return 0; //indicate successful termination
}
