#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void merge(int *arr, int start, int end){
    int mid = start + (end-start)/2;

    int len1 = mid-start+1;
    int len2 = end-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying the first array element till mid in first
    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    // copying the second array element from mid+1 to end in second
    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge two Sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    // till both indexes are equal
    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // only for index1 
    while(index1 < len1){
            arr[mainArrayIndex++] = first[index1++];
    }

    // only for index2 
    while(index2 < len2){
            arr[mainArrayIndex++] = second[index2++];
    }

    delete []first, delete []second;
}

void mergeSort(int *arr, int start, int end){
    if(start >= end)
        return;
    
    int mid = start + (end-start)/2;


    // sorting the left part here 
    mergeSort(arr,start, mid);

    // sorting the right part here 
    mergeSort(arr,mid+1, end);

    // merging the sorted arrays
    merge(arr,start,end);
}
int main(){
    int arr[8] = {8,7,6,5,4,3,2,1};

    cout << "Before sorting, array is: ";
    printArray(arr,8);

    mergeSort(arr,0,7);
    cout << endl;

    cout << "After sorting, array is: ";
    printArray(arr, 8);
    return 0;
}