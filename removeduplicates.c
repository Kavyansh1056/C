#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the sorted array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (in sorted order):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // If array has 0 or 1 element, no duplicates possible
    if (n == 0 || n == 1) {
        printf("Array after removing duplicates:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        return 0;
    }

    int temp[n];  // Temporary array to store unique elements
    int j = 0;    // Index for temp[]

    // Step 1: Copy only unique elements into temp[]
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {  // Skip duplicates
            temp[j++] = arr[i];
        }
    }
    // Copy last element always
    temp[j++] = arr[n - 1];

    // Step 2: Copy back to original array
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    // Step 3: Print result
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
