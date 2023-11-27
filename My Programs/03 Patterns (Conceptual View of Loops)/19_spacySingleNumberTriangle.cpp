#include <iostream>
using namespace std;

int main(){
    //      1
    //     22
    //    333
    //   4444
    //  55555

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout << " ";
        }
        for(int j=n-i+1; j>=1; j--){
            cout << n-i+1;
        }
        cout << endl;
    }   
    return 0;
}