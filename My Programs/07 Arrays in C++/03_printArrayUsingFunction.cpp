#include <iostream>
using namespace std;
void printArray(int arr[], int size){

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10] = {2,9,2};
    int size = sizeof(arr)/sizeof(int);

    // calling the array using function
    printArray(arr,size);

    return 0;
}