#include <iostream>
using namespace std;
int raisePower(int n){
    if(n==0){
        return 1;
    }

    return 2*raisePower(n-1);
}
int main(){
    int n;
    cout << "Enter the power to raise 2 to: ";
    cin >> n;

    int ans = raisePower(n);
    cout << "2 raised to power " << n << " is: " << ans << endl;

    return 0;
}