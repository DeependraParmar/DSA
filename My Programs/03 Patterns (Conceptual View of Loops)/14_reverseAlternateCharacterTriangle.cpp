#include <iostream>
using namespace std;

int main(){
    // D 
    // C D
    // B C D
    // A B C D

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << char(ch+n-i+j-1) << " ";
        }
        cout << endl;
    }
    return 0;
}