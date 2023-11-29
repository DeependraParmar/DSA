#include <iostream>
using namespace std;
void evenOrOdd(int n){
    if(n%2 == 0){
        cout << n << " is even" << endl;
    }
    else{
        cout << n << " is odd" << endl;
    }
}
int main(){
    int n;
    cout << "Enter the number for even-odd check: ";
    cin >> n;

    evenOrOdd(n);
    return 0;
}