#include <iostream>
using namespace std;

int fastExponentiation(int a, int b){
    if(b==0){
        return 1;
    }

    if(b==1){
        return a;
    }

    int ans = fastExponentiation(a,b/2);

    if(b%2==0)
        return ans*ans;
    else
        return a*ans*ans;
}
int main(){
    int a,b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;

    int ans = fastExponentiation(a,b);
    cout << "Answer is: " << ans << endl;
    return 0;
}