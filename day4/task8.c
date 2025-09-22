// program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main ()
{
    int number, sum=0,i; //declaration of variables
    //input a positive number from user
    printf("enter the postive nuumber\n");  
    scanf("%d",&number);
    //calculate the sum of first n natural numbers
    //using for loop
    for(i=1;i<=number;i++)
    {
        sum=sum+i;     //sum=sum+i is same as sum+=i
    }       
    printf("the sum of fisrt natural number is%d \n",sum);   
    //display the result
    return 0;   
}   