#include <iostream>
using namespace std;

void inputArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << "["<< i << "]: ";
        cin >> arr[i];
    }
}
int binarySearch(int *arr, int start, int end, int target){
    int mid = start + (end-start)/2;
    bool ans = false;

    if(start > end){
        return -1;
    }
    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return binarySearch(arr, mid+1 , end, target);
    }
    else{
        return binarySearch(arr, start, mid-1, target);
    }

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

    int ans = binarySearch(arr,0,n-1,target);

    if(ans == -1){
        cout << "Element " << target << " not found" << endl;
    }
    else{
        cout << "Element " << target << " found at index: " << ans << endl;
    }
    return 0;
}