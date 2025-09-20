// Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    int c;
    printf("Before swapping: a=%d, b=%d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}