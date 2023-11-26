#include <iostream>
using namespace std;

int main(){
    // A B C D E 
    // B C D E F
    // C D E F G
    // D E F G H
    // E F G H I 
    
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << char(ch+i+j-2) << " ";
        }
        cout << endl;
    }
    return 0;
}