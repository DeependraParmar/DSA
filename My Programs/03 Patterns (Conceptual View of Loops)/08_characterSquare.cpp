#include <iostream>
using namespace std;

int main(){
    // A A A A A 
    // B B B B B
    // C C C C C
    // D D D D D 
    // E E E E E

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ch <<" ";
        }
        cout << endl;
        ch++;
    }
    return 0;
}