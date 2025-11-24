//Merge two arrays.
#include <stdio.h>
int main()
{
    int n1, n2, i, j;

    printf("Enter the number of elements in the first array: "); // Input size of first array
    scanf("%d", &n1);
    int arr1[n1]; // Declare first array

    printf("Enter %d integers for the first array:\n", n1); // Input elements of first array
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the second array: "); // Input size of second array
    scanf("%d", &n2);
    int arr2[n2]; // Declare second array

    printf("Enter %d integers for the second array:\n", n2); // Input elements of second array
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1 + n2]; // Declare merged array

    // Merge the two arrays
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j];
    }

    // Output the merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) // Print merged array elements
    {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}