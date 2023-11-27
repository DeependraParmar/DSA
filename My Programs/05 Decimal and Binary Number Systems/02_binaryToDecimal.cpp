#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the binary to get decimal: ";
    cin >> n;

    int decimal = 0;
    for(int i=0; n!=0; i++){
        int digit = n%10;

        if(digit == 1){
            decimal += pow(2, i);
        }
        
        n/=10;
    }

    cout << "Decimal Representation of " << n << " is: " << decimal << endl;

    return 0;
}