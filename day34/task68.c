//delete an element from an array.
#include <stdio.h>
int main() {
    int arr[100], n, element, i, pos, found = 0;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to delete
    printf("Enter the element to delete: ");
    scanf("%d", &element);

    // Find the position of the element to delete
    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            pos = i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array!\n");
        return 1;
    }

    // Shift elements to the left
    for (i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // decrease size

    // Print updated array
    printf("Array after deletion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}