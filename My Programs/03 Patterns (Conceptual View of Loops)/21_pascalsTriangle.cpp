#include <iostream>
using namespace std;

int main(){
    //    1
    //   121
    //  12321
    // 1234321

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            cout << k;
        }
        int start = i-1;
        for(int m=1; m<=i-1; m++){
            cout << start--;
        }
        cout << endl;
    }
    return 0;
}