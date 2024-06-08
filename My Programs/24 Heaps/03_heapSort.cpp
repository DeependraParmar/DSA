#include <iostream>
#include <algorithm> // Add this line to import the swap function
using namespace std;

void heapify(int arr[], int size, int index){
    int max = index;
    int left = 2*index;
    int right = 2*index + 1;

    if(left <= size && arr[left] > arr[max])
        max = left;

    if(right <= size && arr[right] > arr[max])
        max = right;
    
    if(max != index){
        swap(arr[max], arr[index]);
        heapify(arr, size, max);
    }
}
void heapSort(int arr[], int n){
    int heapSize = n;
     
    while(heapSize > 1){
       swap(arr[1], arr[heapSize]);
        heapSize--;

        heapify(arr, heapSize, 1);
    }
}
void print(int arr[], int n){
    for(int i=1; i<=n; i++)
        cout << arr[i] << " ";
}
int main(){
    int arr[8] = {-1,10,20,30,40,50,60,70};
    int n = 7;

    for(int i=n/2; i>0; i--){
        heapify(arr, n, i);
    }

    cout << "Printing the heap: " ;
    print(arr, n);

    heapSort(arr,n);

    cout << endl << endl << "After sorting, heap looks like: ";
    print(arr,n);

    return 0;
}