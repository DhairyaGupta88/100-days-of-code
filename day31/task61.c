//Search for an element in an array using linear search.
#include<stdio.h>
int main() {
    int n, i, target, foundIndex = -1;

    printf("Enter the number of elements in the array: "); // Input size of array
    scanf("%d", &n);

    int arr[n]; // Declare array

    printf("Enter %d integers:\n", n); // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search for: "); // Input target element
    scanf("%d", &target);

    // Linear search for the target element
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            foundIndex = i; // Element found at index i
            break;
        }
    }

    // Output the result
    if(foundIndex != -1) {
        printf("Element %d found at index %d.\n", target, foundIndex);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}