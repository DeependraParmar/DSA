#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << char(ch + j - 1) << " ";
        }
        cout << endl;
    }
    return 0;
}