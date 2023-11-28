#include <iostream>
using namespace std;

// function to find the result of the base^power 
int returnPower(int b, int p){
    int ans = 1;
    for(int i=1; i<=p; i++){
        ans = ans * b;
    }
    return ans;
}
int main(){
    /*
        Function: A function is a block of code that performs a specific task and also helps in login seperation. It can be called multiple times whenever required.

        > Implements DRY (Don't Repeat Yourself) principle and prevents the code from being redundant and bulky.
        > Makes the code more readable and understandable.
        > Makes the code reusable.
        > Makes the code more manageable.
        > Implements Integrity(change once, reflect everywhere) principle.
    */

    int base,power;
    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the power: ";
    cin >> power;

    cout << "Result of "<< base << "^" << power << " is: " << returnPower(base,power) << endl;
    return 0;
}