#include <iostream>
using namespace std;
int peakIndex(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;

    while(start < end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else if(arr[mid] > arr[mid+1]){
            end = mid - 1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return start;
}
int main(){
    int arr[8] = {3,6,9,11,19,14,12,9,};

    cout << "Peak's Index is: " << peakIndex(arr,8) << endl;
    return 0;
}