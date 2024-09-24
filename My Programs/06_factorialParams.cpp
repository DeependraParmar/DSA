#include <iostream>
using namespace std;

void factorial(int n, int ans){
    if(n<1){
        cout << "Factorial is: " << ans << endl;
        return;
    }

    ans *= n;
    factorial(n-1, ans);
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    factorial(n, 1);   
    return 0;
}