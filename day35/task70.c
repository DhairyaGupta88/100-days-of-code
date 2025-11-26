//Rotate an array to the right by k positions.
#include <stdio.h>

// Function to reverse a part of the array
void reverse(int a[], int start, int end) {
    while (start < end) {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter k (number of right rotations): ");
    scanf("%d", &k);

    k = k % n;   // Handle k > n

    // Step 1: Reverse whole array
    reverse(a, 0, n - 1);

    // Step 2: Reverse first k elements
    reverse(a, 0, k - 1);

    // Step 3: Reverse remaining n-k elements
    reverse(a, k, n - 1);

    printf("Array after right rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
