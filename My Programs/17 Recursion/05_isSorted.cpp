#include <iostream>
using namespace std;

void inputArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << "["<< i << "]: ";
        cin >> arr[i];
    }
}
bool isSorted(int *arr, int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1,n-1);
        return ans;
    }
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    if(isSorted(arr,n)){
        cout << "Array is Sorted" << endl;
    }
    else{
        cout << "Array is not Sorted" << endl;
    }

    return 0;
}