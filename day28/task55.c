// Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*
#include <stdio.h> //

int main()
{
    int rows;
    int i, j; // Loop variables
    printf("Enter number of rows: ");
    scanf("%d", &rows); // Input number of rows

    // Upper half
    for (int i = 1; i <= rows; i++) // Loop for increasing rows
    {
        for (j = 1; j <= i; j++)// Print stars with a space
        {
            printf("* ");
        }
        printf("\n");
    }

    // Lower half
    for (i = rows - 1; i >= 1; i--) // Loop for decreasing rows
    {
        for (j = 1; j <= i; j++) // Print stars with a space
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}