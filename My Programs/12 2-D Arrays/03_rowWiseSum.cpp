#include <iostream>
using namespace std;
void rowWiseSum(int arr[3][3], int rows, int cols){
    cout << "Row: Sum" <<endl;
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum += arr[i][j];
        }
        cout << i <<": " << sum << endl; 
    }
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

    cout << endl;
    rowWiseSum(arr,3,3);
    
    return 0;
}