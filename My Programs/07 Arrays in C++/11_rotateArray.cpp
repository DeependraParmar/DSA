#include <iostream>
using namespace std;

int main(){
    int arr[8] = {3,1,5,8,4,9,7,2};
    int n = 8;
    int k;
    cout << "Enter the degree of rotation: ";
    cin >> k;

    int temp[8];

    cout << "Before rotation: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
        temp[(i+k)%n] = arr[i];
    }

    cout << endl << "After rotation: ";
    for(int i=0; i<n; i++){
        arr[i] = temp[i];
        cout << arr[i] << " ";
    }


    return 0;
}