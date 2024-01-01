#include <iostream>
using namespace std;

void inputArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << "["<< i << "]: ";
        cin >> arr[i];
    }
}

int sumOfArray(int *arr, int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int sum = arr[0] + sumOfArray(arr+1,n-1);
    return sum;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    cout << "Sum of given array is: " << sumOfArray(arr,n) << endl;
    

    return 0;
}