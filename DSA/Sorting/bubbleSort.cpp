#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}       

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++){
        cout << "Enter the element at index " << i << " : ";
        cin >> array[i];
    }
    bubbleSort(array, n);
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}
