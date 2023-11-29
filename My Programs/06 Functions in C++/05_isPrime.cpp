#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the number to check prime: ";
    cin >> n;

    if(isPrime(n)){
        cout << n << " is a Prime Number" << endl;
    }
    else{
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}