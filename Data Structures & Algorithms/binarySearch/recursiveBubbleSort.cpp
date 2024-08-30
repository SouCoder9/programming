#include <iostream>

int binarySearch(int nums[], int target, int low, int high) {
    if (high < low) {
        return -1;
    }
    int mid = (high + low) / 2;
    if (nums[mid] == target) {
        return mid;
    } else if (nums[mid] > target) {
        return binarySearch(nums, target, low, mid - 1);
    } else {
        return binarySearch(nums, target, mid + 1, high);
    }
}

int main() {
    int arr[] = {34, 35, 36, 37, 38, 39, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 37;

    int result = binarySearch(arr, key, 0, n - 1);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
