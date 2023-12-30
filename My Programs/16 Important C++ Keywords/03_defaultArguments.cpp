#include <iostream>
using namespace std;
void printArray(int arr[], int n, int start = 0){
    for(int i=start; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    // we can set the default arguments of a function.    
    int arr[5] = {1,2,4,6,7};

    printArray(arr,5,2); // prints from index 2 to 4
    printArray(arr,5); // prints from start = 0 (default argument) to 4
    return 0;
}