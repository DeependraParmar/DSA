#include <iostream>
using namespace std;

void heapify(int arr[], int n, int index){
    int max = index;
    int left = 2*index;
    int right = (2*index) + 1;

    if(left <= n &&  arr[left] > arr[max])
        max = left;

    if(right <= n && arr[right] > arr[max])
        max = right;
    
    if(max != index){
        swap(arr[max], arr[index]);
        heapify(arr, n, max);
    }
}
int main(){
    // Heapify is a simple algorithm which is used to build a heap from an array given as input

    int arr[8] = {-1, 10, 20, 30, 40, 50, 60, 70};   
    int n = 7;
    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    cout << endl << "After heapify, Heap looks like: ";
    for(int i=1; i<=n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}