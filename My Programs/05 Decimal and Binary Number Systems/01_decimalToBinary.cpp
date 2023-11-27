#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to find binary of: ";
    cin >> n;

    int binary = 0;

    for(int i=0; n!=0; i++){
        int digit = n&1;
        binary += (digit * pow(10,i));
        n >>= 1;
    }

    cout << "Binary Representation of " << n << " is : " << binary << endl;
    return 0;
}