// Write a program to display the day of the week based on a number (1–7) using switch-case.
#include <stdio.h>
int main()
{
    int day;
    printf("Enter the (1-7)days of the week\n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("the day is monday\n");
        break;
    case 2:
        printf("The day is tuesday\n");
        break;
    case 3:
        printf("the day is wednesday\n");
        break;
    case 4:
        printf("the day is Thursday\n");
        break;
    case 5:
        printf("the day is Friday\n");
        break;
    case 6:
        printf("the day is Saturday\n");
        break;
    case 7:
        printf("the day is Sunday\n");
        break;
    default:
    printf("invalid input; enter the days between(1-7)\n");
    }
    return 0;
}