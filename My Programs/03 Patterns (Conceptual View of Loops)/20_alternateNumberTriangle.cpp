#include <iostream>
using namespace std;

int main(){
    // 1234
    //  234
    //   34
    //    4

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << n-i+k;
        }
        cout << endl;
    }   
    return 0;
}