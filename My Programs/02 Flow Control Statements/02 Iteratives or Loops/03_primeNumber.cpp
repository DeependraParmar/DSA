#include <iostream>
using namespace std;

int main(){
    // Program to check whether the number given by the user is prime or not. 
    // Approach given is although beginner friendly but less optimised approach. It has a lot of Time complexity ie O(n) when the input is huge. It can be optimised at a huge extent.
    int n;
    cout << "Enter the number to check prime: ";
    cin >> n;
    
    bool isPrime = true;

    for (int i=2; i<n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout << "Yes, Prime Number" << endl;
    }
    else{
        cout << "No, its not a Prime Number" << endl;
    }
    return 0;
}