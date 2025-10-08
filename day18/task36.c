//Write a program to find the HCF (GCD) of two numbers.
//HCF (Highest Common Factor) or GCD (Greatest Common Divisor) of two numbers is the largest number that divides both of them completely.
#include <stdio.h>
int main()
{ 
    int a, b, i, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    for(i=1; i<=a && i<=b; i++) //loop from 1 to the smaller of a and b
    {
        if(a%i==0 && b%i==0) //check if i is a factor of both a and b
        {
            hcf = i; //update hcf if i is a common factor
        }
    }
    printf("HCF of %d and %d is %d\n", a, b, hcf); //print the HCF
    return 0;
}