//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int arr[100], n, element, i, pos;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted elements
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Find the correct position
    pos = n;  // default: insert at end
    for (i = 0; i < n; i++) {
        if (element < arr[i]) {
            pos = i;
            break;
        }
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
