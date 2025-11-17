//Write a program to print the following pattern:

//   *
//  ***
// *****
//*******
// *****
//  ***
//   *
#include <stdio.h>
int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Upper half of pattern (increasing stars)
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(space = 1; space <= rows - i; space++)//
         {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of pattern (decreasing stars)
    for(i = rows - 1; i >= 1; i--) {
        // Print leading spaces
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}