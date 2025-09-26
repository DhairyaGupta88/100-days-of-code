// Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include <stdio.h>
int main()
{
    char character;
    // Input a character
    printf("enter the character\n");
    scanf("%c",&character);
    // Check uppercase alphabet
    if (character >= 'A' && character <= 'Z')
    {
        printf("The character ''%c' is an uppercase alphabet\n", character);
    }
    // Check lowercase alphabet
    else if (character >= 'a' && character <= 'z')
    {
        printf("the character '%c' is an lowercase alphabet\n", character);
    }
    // Check digit
    else if (character >= '1' && character <= '9')
    {
        printf("the character is '%c' is a digit\n", character);
    }
    else
    // Otherwise, it is a special character
    {
         printf("the character is '%c' is a special character\n", character);
    }
    return 0;
}