#include <iostream>
int binarySearch(int nums[], int target, int n) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {34, 35, 36, 37, 38, 39, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 37;

    int result = binarySearch(arr, key, n);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}