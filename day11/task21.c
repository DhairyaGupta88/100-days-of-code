// Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>
int main()
{
    int month; // variable declaration
    printf("Enter the month nuumber(1-12)\n");
    scanf("%d", &month); // taking input from user
    switch (month)       // switch case statement
    {
    case 1: // case 1 for january month
        printf("The month is january and has 31 days\n");
        break; // break statement
    case 2:    // case 2 for feburary month
        printf("The month is Feburary and has 28 days and 6 hours\n");
        break; // break statement
    case 3:    // case 3 for march month
        printf("The month is march and has 31 days\n");
        break; // break statement
    case 4:    // case 4 for april month
        printf("The month is april and has 30 days\n");
        break; // break statement
    case 5:    // case 5 for may month
        printf("The month is may and has 31 days\n");
        break; // break statement
    case 6:    // case 6 for june month
        printf("The month is june and has 30 days\n");
        break; // break statement
    case 7:    // case 7 for july month
        printf("The month is july and has 31 days\n");
        break; // break statement
    case 8:    // case 8 for august month
        printf("The month is august and has 31 days\n");
        break; // break statement
    case 9:    // case 9 for september month
        printf("The month is september and has 30 days\n");
        break; // break statement
    case 10:   // case 10 for october month
        printf("The month is october and has 31 days\n");
        break; // break statement
    case 11:   // case 11 for november month
        printf("The month is november and has 30 days\n");
        break; // break statement
    case 12:   // case 12 for december month
        printf("The month is December and has 31 days\n");
        break; // break statement
    default:
        printf("invalid input; enter the month between(1-12)\n");
    }
    return 0;
}