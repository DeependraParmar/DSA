#include <iostream>
using namespace std;

void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i << ": ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void swapAlternate(int arr[], int n){
    for(int i=0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    inputArray(arr, size);

    cout << "Before Alternate Swapping: ";
    printArray(arr, size);
    swapAlternate(arr, size);
    cout << endl;

    cout << "After Alternate Swapping: ";
    printArray(arr, size);

    return 0;
}