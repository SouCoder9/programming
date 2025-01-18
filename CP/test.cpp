#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Linear Search
int linearSearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search (Requires sorted array)
int binarySearch(int *arr, int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main() {
    int n, key, choice;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    printf("Choose search method: 1. Linear Search  2. Binary Search\n");
    scanf("%d", &choice);

    int result;
    clock_t start, end;
    start = clock();

    if (choice == 1) {
        result = linearSearch(arr, n, key);
    } else {
        // Sort array for Binary Search (Assume already sorted or sort here)
        result = binarySearch(arr, 0, n - 1, key);
    }

    end = clock();
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found.\n");

    printf("Time taken: %.5f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    free(arr); // Free dynamically allocated memory
    return 0;
}
