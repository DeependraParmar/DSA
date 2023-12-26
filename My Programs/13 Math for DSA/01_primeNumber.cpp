#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n<=1){
        return false;
    }

    bool isPrimeFlag = true;
    for(int i=2; i<=n/2; i++){
        if(n%i == 0){
            isPrimeFlag = false;
        }
    }
    return isPrimeFlag;
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if(isPrime(n)){
        cout << n << " is a Prime Number" << endl;
    }
    else{
        cout << n << " is not a Prime Number" << endl;
    }
    return 0;
}