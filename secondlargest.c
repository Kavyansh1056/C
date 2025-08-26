#include <stdio.h>
#include <limits.h>   // Provides INT_MIN and INT_MAX constants

int main() {
    int n;

    // Step 1: Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n]; // Declare array of size n

    // Step 2: Take input for array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize helper variables
    // First largest starts as smallest possible integer
    // Second largest also starts as smallest possible integer
    // First smallest starts as largest possible integer
    // Second smallest also starts as largest possible integer
    int first_max = INT_MIN, second_max = INT_MIN;
    int first_min = INT_MAX, second_min = INT_MAX;

    // Step 4: Traverse the array once to find required values
    for (int i = 0; i < n; i++) {
        // ---- Finding Largest and Second Largest ----
        if (arr[i] > first_max) {
            // Current element is bigger than first_max
            // So, first_max becomes second_max
            second_max = first_max;
            first_max = arr[i];
        } 
        else if (arr[i] > second_max && arr[i] != first_max) {
            // Current element is between first_max and second_max
            second_max = arr[i];
        }

        // ---- Finding Smallest and Second Smallest ----
        if (arr[i] < first_min) {
            // Current element is smaller than first_min
            // So, first_min becomes second_min
            second_min = first_min;
            first_min = arr[i];
        } 
        else if (arr[i] < second_min && arr[i] != first_min) {
            // Current element is between first_min and second_min
            second_min = arr[i];
        }
    }

    // Step 5: Print results with conditions
    if (second_max == INT_MIN)
        printf("No second largest element exists (maybe all elements are the same).\n");
    else
        printf("Second Largest = %d\n", second_max);

    if (second_min == INT_MAX)
        printf("No second smallest element exists (maybe all elements are the same).\n");
    else
        printf("Second Smallest = %d\n", second_min);

    return 0;
}
