//Write a program to print the following pattern: using nested loops
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>

int main() {
    int i, j; //loop counters

    for (i = 0; i < 5; i++) { //outer loop for rows
        for (j = 0; j < 5; j++) { //inner loop for columns
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

