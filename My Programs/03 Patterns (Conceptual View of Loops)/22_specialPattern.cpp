#include <iostream>
using namespace std;

int main(){
    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        for(int k=1; k<=2*(n-i); k++){
            cout << "*";
        }
        for(int m=i; m>=1; m--){
            cout << m;
        }
        cout << endl;
    }   
    return 0;
}