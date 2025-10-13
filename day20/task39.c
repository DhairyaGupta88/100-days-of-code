//Write a program to find the product of odd digits of a number.
//The product of odd digits of a number is the total value obtained by multiplying all the individual odd digits of that number.
#include<stdio.h>
int main()
{
    int n, product=1, digit, foundodd=0;
    printf("enter the number:");//prompt for user input
    scanf("%d", &n);//read the input number
    while(n!=0)
    {
        digit=n%10;
        if(digit%2==0)//check if the digit is even
        {
            n=n/10;//remove the last digit from n
            continue;//skip the even digit
        }
        product*=digit;
        foundodd=1;
        n=n/10;//remove the last digit from n
    }
    if(foundodd)
        printf("product of odd digits is %d", product);//print the product of odd digits
    else
        printf("no odd digit found");   
    return 0;
}