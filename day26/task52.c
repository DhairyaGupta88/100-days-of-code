// Write a program to print the following pattern:

// *

// *
// *
// *

// *
// *
// *
// *
// *

// *
// *
// *

// *

#include <stdio.h>

int main() {
    // Array representing the number of lines in each group
    int groups[] = {1, 3, 5, 1};
    int num_groups = sizeof(groups) / sizeof(groups[0]);

    // Iterate through each group
    for (int i = 0; i < num_groups; i++) {
        // Iterate for the number of lines specified in the current group
        for (int j = 0; j < groups[i]; j++) {
            // Print a single asterisk followed by a newline character
            printf("*\n");
        }
    }

    return 0;
}
