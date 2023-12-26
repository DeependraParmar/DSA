#include <iostream>
using namespace std;
void linearSearch(int arr[3][3], int rows, int cols, int target){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] == target){
                cout << "Element found at: "<< "["<<i<<"]"<<"["<<j<<"]";
                return;
            }
        }
    }
    cout << endl << "Element not found" << endl;
}
int main(){
    int arr[3][3];

    // taking input 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "["<<i<<"]"<<"["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }   

    cout << endl << endl;
    int target;
    cout << "Enter the element to search: ";
    cin>> target;


    linearSearch(arr,3,3,target);
    
    return 0;
}