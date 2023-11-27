#include <iostream>
using namespace std;

int main(){
    // A 
    // B C
    // C D E
    // D E F G
    // E F G H I

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << char(ch+i+j-2) << " ";
        }
        cout << endl;
    }   
    return 0;
}