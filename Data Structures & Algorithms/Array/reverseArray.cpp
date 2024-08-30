#include <iostream>
using namespace std;

int revArr(int arr[], int size)
{
    int temparray[size];
    for (int i = 0; i < size; i++)
    {
        temparray[i] = arr[size - i - 1];
    }

    for (int i = 0; i < size; i++)
    {
        cout << temparray[i];
    }
    return 0;
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << nums[i];
    cout << endl
         << "Reversed array :";
    revArr(nums, n);
    return 0;
}