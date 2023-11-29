#include <iostream>
using namespace std;

int countSetBits(int a,int b){
    int count = 0;
    int n = a & b;

    while(n!=0){
        int bit = n&1;
        if(bit == 1){
            count++;
        }
        n >>= 1;
    }
    return count;
}
int main(){
    int a,b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Number of set bits in " << a << " & " << b << " is: " << countSetBits(a,b) << endl;

    return 0;
}