// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
// 90-100: Grade A
// 80-89: Grade B
// 70-79: Grade C
// 60-69: Grade D
// below 60: Grade F.
#include <stdio.h>
int main()
{
    unsigned int marks;
    printf("Enter the percentage (0-100): ");
    scanf("%u", &marks);
    if (marks > 100)
    {
        printf("Percentage must be between 0 and 100\n");
        return 1;
    }

    if (marks >= 90)
        printf("Grade A\n");
    else if (marks >= 80)
        printf("Grade B\n");
    else if (marks >= 70)
        printf("Grade C\n");
    else if (marks >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
