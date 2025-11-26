//Insert an element in an array at a given position.
#include <stdio.h>
int main() {
    int arr[100], n, element, i, pos;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Position to insert
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    // Validate position
    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = element;
    n++; // increase size

    // Print updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}   