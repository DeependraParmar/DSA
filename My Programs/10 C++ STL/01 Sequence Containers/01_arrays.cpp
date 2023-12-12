#include <iostream>
#include <array>
using namespace std;


void inputArray(array<int,6> &arr){
    for(int i=0; i<6; i++){
        cout << i << ": ";
        cin >> arr[i];
    }
}
void outputArray(array<int,6> &arr){
    for(int i=0; i<6; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    array<int,6> arr = {1,2,3,4,5,6};
    int size = arr.size();

    // cout << "Inputting the array elements" << endl;
    // inputArray(arr);

    // cout << "Printing the array" << endl;
    // outputArray(arr);

    // Finding the element at particular index 
    cout << endl << "Element at 4th index is: " << arr.at(4) << endl;

    // Finding whether the array is empty or not 
    cout << "Array empty or not: " << arr.empty() << endl;

    // Finding the first element of the array 
    cout << "First element of arr is: " << arr.front() << endl;

    // Finding the last element of the array 
    cout << "Last element of arr is: " << arr.back() << endl;

    return 0;
}