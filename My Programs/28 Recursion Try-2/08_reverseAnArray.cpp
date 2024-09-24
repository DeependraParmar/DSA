#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    cout << "Array: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}
void reverse(int start, int end, int arr[]){
    if(start > end){
        cout << endl;
        printArray(arr, 6);
        return;
    }
    
    swap(arr[start], arr[end]);
    reverse(start+1, end-1, arr);
}
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    printArray(arr,6);
    reverse(0, 5, arr);
    cout << endl;

    return 0;
}