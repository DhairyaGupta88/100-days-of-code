#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low, high, mid;

    // Input size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input sorted elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary search
    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            return 0;   // exit program
        }
        else if (arr[mid] < key) {
            low = mid + 1;   // search right half
        }
        else {
            high = mid - 1;  // search left half
        }
    }

    printf("Element %d not found in the array.\n", key);

    return 0;
}
