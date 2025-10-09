// Write a program to find the LCM of two numbers.
// LCM (Least Common Multiple) of two numbers is the smallest number that is a multiple of both.
#include <stdio.h>
int main()
{
    int number1, number2, i, lcm;// lcm is initialized to 0

    printf("enter the numbers:");// input two numbers   
    scanf("%d %d", &number1, &number2);
    for (i = 1; i <= number1 * number2; i++)// loop from 1 to the product of number1 and number2
    {
        if (i % number1 == 0 && i % number2 == 0)// check if i is a multiple of both number1 and number2
        {
            lcm = i;// assign i to lcm
            break;// break the loop once the lcm is found
        }
    }
    printf("lcm of %d and %d is %d", number1, number2, lcm);// print the lcm
    return 0;
}