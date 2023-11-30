#include <iostream>
using namespace std;
void inputArray(int arr[], int n){
    cout << "0: " ;
    cin >> arr[0];

    for(int i=1; i<n; i++){
        int temp;
        cout << i <<": ";
        cin >> temp;

        if(temp > arr[i-1]){
            arr[i] = temp;
        }
        else{
            cout << "Data not sorted. Enter once again." << endl;
            i--;
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int binarySearch(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid-1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}
int main(){
    int arr[100];
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    cout << "Please fill the array" << endl;
    inputArray(arr,size);

    cout << endl << "Printing the array" << endl;
    printArray(arr,size);

    int target;
    cout << endl << endl << "Enter the element to search: ";
    cin >> target;


    int index = binarySearch(arr,size,target);
    if(index == -1){
        cout << endl << "Element Not Found!" << endl;
    }
    else{
        cout << endl << target << " found at index: " << index << endl;
    }

    return 0;
}