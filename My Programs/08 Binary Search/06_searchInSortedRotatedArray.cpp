#include <iostream>
using namespace std;
int getPivot(int arr[], int n){
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start < end){
        if(arr[mid ] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return end;
}
int binarySearch(int arr[], int n, int target, int s, int e){
    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int searchInSortedRotatedArray(int arr[], int n, int target){
    int pivot = getPivot(arr,n);
    cout << "Pivot is at index:  " << pivot << endl;
    
    if(target >= arr[pivot] && target<= arr[n-1]){    
        cout << target << " found at index: " << binarySearch(arr,n,target,pivot,n-1);
    }
    else{
        cout << target << " found at index: " << binarySearch(arr,n,target,0,pivot-1);
    }
}
int main(){
    int arr[5] = {7,9,1,2,3};
    searchInSortedRotatedArray(arr,5,7);
    return 0;
}   