#include <iostream>
using namespace std;

int main(){
    int arr[6] = {23,62,15,16,35,92};
    int *ptr = arr;

    // whenever we write arr[i] ====> *(arr+i) / i[arr] =====> *(i+arr);
    for(int i=0; i<6; i++){
        cout << ptr[i] << " ";
    }

    cout << endl;
    
    for(int i=0; i<6; i++){
        cout << i[ptr] << " ";
    }

    return 0;
}