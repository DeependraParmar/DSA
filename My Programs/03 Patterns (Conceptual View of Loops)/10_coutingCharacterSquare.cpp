#include <iostream>
using namespace std;

int main(){
    // A B C D E 
    // F G H I J
    // K L M N O
    // P Q R S T
    // U V W X Y

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    char ch = 'A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ch++ << " ";
        }
        cout << endl;
    }   
    return 0;
}