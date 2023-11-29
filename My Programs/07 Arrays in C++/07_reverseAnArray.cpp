#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << i << ": ";
        cin >> arr[i];
    }
}

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;


    while(start <= end){
        // write code manually or  
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;

        // use in-built function 
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    inputArray(arr, size);

    cout << "Before Reversing: " ;
    printArray(arr,size);
    reverseArray(arr,size);
    cout << endl;
    
    cout << "After Reversing: ";
    printArray(arr,size);

    return 0;
}