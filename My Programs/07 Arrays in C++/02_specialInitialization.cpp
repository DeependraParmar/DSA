#include <iostream>
using namespace std;

int main(){
    int arr[100];

    std::fill_n(arr,100,203);

    cout << arr[99];
     return 0;
}