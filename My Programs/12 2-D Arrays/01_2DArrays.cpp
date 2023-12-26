#include <iostream>
using namespace std;

int main(){
    int arr[3][3];

    // taking input 
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << "["<<i<<"]"<<"["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }   

    // priting the output 
    cout << endl << endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}