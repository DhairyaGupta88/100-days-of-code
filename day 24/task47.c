//Write a program to print the following pattern:
//*
//**
//***
//****
//*****
#include <stdio.h>
int main()
{
    int i,j; //loop counters
    for(i=1;i<=5;i++) //outer loop for rows
{
    for(j=1;j<=i;j++) //inner loop for columns
    {
        printf("*");
    }
    printf("\n");
}
    return 0;
}