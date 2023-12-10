#include <iostream>
using namespace std;

int main(){
    int arr[6] = {6,5,4,3,2,1};
    int n = 6;

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        while(arr[j-1] > temp && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }  

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}