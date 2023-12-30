#include <iostream>
using namespace std;

void inputArray(int **arr, int r, int c){
    cout << "Fill the array now..." << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "[" << i << "]" << "[" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}
void outputArray(int **arr, int r, int c){
    cout << endl << "Array looks like this...." << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int row,col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int **arr = new int*[row];
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }   

    // array input and output
    inputArray(arr,row,col);
    outputArray(arr,row,col);


    // deallocating the memory allocated 
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete [] arr;

    cout << endl << endl << "Memory Deallocated successfully" << endl;
    return 0;
}