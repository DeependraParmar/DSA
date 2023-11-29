#include <iostream>
using namespace std;
void minAndMaxElement(int arr[], int n){
    int max = INT32_MIN;
    int min = INT32_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Maximum element of the array is: " << max << endl;
    cout << "Minimum element of the array is: " << min << endl;
}
int main(){
    int arr[10] = {34,64,82,37,83,46,12,19,34,5};
    minAndMaxElement(arr,10);
    return 0;
}