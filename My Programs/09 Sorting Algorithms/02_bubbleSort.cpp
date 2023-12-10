#include <iostream>
using namespace std;

int main(){
    int arr[6] = {10,8,7,3,9,1};
    int n = 6;

    for(int i=0; i<n-1; i++){
        int flag = 0;
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0){
            break;
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}