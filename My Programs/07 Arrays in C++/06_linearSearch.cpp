#include <iostream>
using namespace std;

void inputArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << i << ": ";
        cin >> arr[i];
    }
}
void linearSearch(int arr[], int n, int target){
    bool isFound = 0;
    int foundIndex = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            isFound = true;
            foundIndex = i;
            break;
        }
    }

    if(isFound){
        cout << "Element present at index: " << foundIndex << endl;
    }
    else{
        cout << "404 Not Found!" << endl;
    }
}
int main(){
    int arr[100];
    int size,target;
    cout << "Enter the size of the array: ";
    cin >> size;

    inputArray(arr,size);

    cout << "Enter the element to search in the array: ";
    cin >> target;

    linearSearch(arr,size,target);  
    return 0;
}