//Count even and odd numbers in an array.
#include <stdio.h>
int main() {
    int n, i;
    int evenCount = 0, oddCount = 0;

    printf("Enter the number of elements in the array: "); // Input size of array
    scanf("%d", &n);

    int arr[n]; // Declare array

    printf("Enter %d integers:\n", n); // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd numbers
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            evenCount++; // Increment even count
        } else {
            oddCount++; // Increment odd count
        }
    }

    // Output the counts
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}