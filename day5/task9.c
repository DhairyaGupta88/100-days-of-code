// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main()
{
    float principal, rate, time, simple_intrest, compound_intrest;
    printf("enter the value of pirncipal, rate,time\n"); 
    // taking input from user
    scanf("%f %f %f ", &principal, &rate, &time);
    // calculating simple and compound interest
    simple_intrest = (principal * rate * time) / 100; // formula for simple interest
      // Calculate Compound Interest
    // Formula: Amount = P * (1 + R/100)^T
    // Compound Interest = Amount - Principal
    compound_intrest = principal * (1 + rate / 100) * (1 + rate / 100) * time - principal; 
    // displaying the result
    printf("the simple intrest is %.2f\n", simple_intrest);
    printf("the compound intrest is %.2f\n", compound_intrest);
    return 0;
}