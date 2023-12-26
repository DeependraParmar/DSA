#include <iostream>
using namespace std;
int rowWithLargestSum(int arr[3][3], int row, int col){
    int max = INT32_MIN;
    int maxIndex = -1;

    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            maxIndex = i;
        }
    }

    return maxIndex;
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

    cout << endl << "Row with Max Sum is: " << rowWithLargestSum(arr,3,3);


    return 0;
}   