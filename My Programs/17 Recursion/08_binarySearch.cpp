#include <iostream>
using namespace std;

void inputArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << "["<< i << "]: ";
        cin >> arr[i];
    }
}
bool binarySearch(int *arr, int start, int end, int target){
    int mid = start + (end-start)/2;
    bool ans = false;

    if(start > end){
        return false;
    }
    if(arr[mid] == target){
        return true;
    }
    else if(arr[mid] < target){
        ans = binarySearch(arr, mid+1 , end, target);
    }
    else{
        ans = binarySearch(arr, start, mid-1, target);
    }

    return ans;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    int target;
    cout << "Enter the target to search: ";
    cin >> target;

    if(binarySearch(arr,0,n-1,target)){
        cout << "Element " << target << " found" << endl;
    }
    else{
        cout << "Element " << target << " not found" << endl;
    }
    return 0;
}