#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int partition(int *arr, int start, int end){
    int pivot = arr[start];
    int count = 0;

    for(int i= start+1; i<=end; i++){
        if(arr[i] < pivot)
            count++;
    }

    int pivotIndex = start + count;
    swap(arr[start],arr[pivotIndex]);

    // handling the left and right part of the array 
    int i = start, j = end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if (i < pivotIndex && j > pivotIndex){
            swap(arr[i++], arr[j--]);            
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end){
    if(start >= end)
        return;
    
    int p = partition(arr,start,end);

    // for the left subpart to pivot
    quickSort(arr, start, p-1);

    // for the right subpart to pivot 
    quickSort(arr, p + 1, end);
}
int main(){
    int arr[8] = {8,7,6,5,4,3,2,1};

    cout << "Before sorting, array is: ";
    printArray(arr,8);

    quickSort(arr,0,7);
    cout << endl;

    cout << "After sorting, array is: ";
    printArray(arr, 8);
    return 0;
}