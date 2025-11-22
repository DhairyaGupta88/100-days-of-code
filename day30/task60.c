//Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main() {
    int n, i;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter the number of elements in the array: "); // Input size of array
    scanf("%d", &n);

    int arr[n]; // Declare array

    printf("Enter %d integers:\n", n); // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for(i = 0; i < n; i++) {
        if(arr[i] > 0) {
            positiveCount++; // Increment positive count
        } else if(arr[i] < 0) {
            negativeCount++; // Increment negative count
        } else {
            zeroCount++; // Increment zero count
        }
    }

    // Output the counts
    printf("Number of positive numbers: %d\n", positiveCount);
    printf("Number of negative numbers: %d\n", negativeCount);
    printf("Number of zeros: %d\n", zeroCount);

    return 0;
}