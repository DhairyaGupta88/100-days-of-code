// Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
#include <math.h>
int main()
{   // declaration of variables
    // unsigned int is used to store only positive values
    unsigned int seconds, hours, minutes, reamaining_seconds; 
    // input time in seconds from user
    printf("enter the time in seconds \n");
    scanf("%d", &seconds);
    hours = seconds / 3600;            // 1 hour = 3600 seconds
    minutes = (seconds % 3600) / 60;   // 1 minute = 60 seconds
    reamaining_seconds = seconds % 60; // remaining seconds
    // modulus operator % is used to find the remainder
  // display the result
    printf("the time in hours %d \n", hours);
    printf("the time in minutes %d \n", minutes);
    printf("the time in seconds %d \n", reamaining_seconds);
    return 0;
}