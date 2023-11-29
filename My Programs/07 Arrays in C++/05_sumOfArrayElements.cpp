#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << i << ": ";
        cin >> arr[i];
    }
}
int returnSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100];

    inputArray(arr,size);
    cout << "Sum of all elements of array is: "<< returnSum(arr,size) << endl;   
    return 0;
}