#include <iostream>
using namespace std;
int getPivot(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    return end;
}
int main(){
    int arr[8] = {7,9,1,2,3,4,5,6};
    cout << "Pivot element is: " << arr[getPivot(arr, 8)] << endl;

    return 0;
}