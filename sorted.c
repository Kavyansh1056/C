#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume array is sorted
    int isSorted = 1;  

    // Check each element with the next one
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  
            // If any element is greater than the next, not sorted
            isSorted = 0;
            break;
        }
    }

    // Print result
    if (isSorted)
        printf("The array is sorted in ascending order.\n");
    else
        printf("The array is NOT sorted.\n");

    return 0;
}
