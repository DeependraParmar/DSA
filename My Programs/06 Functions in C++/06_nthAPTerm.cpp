#include <iostream>
using namespace std;

int nthAPTerm(int n, int a, int d){
    return a + ((n-1)*d);
}
int main(){
    int n,a,d;
    cout << "Enter the first term: ";
    cin >> a;
    cout << "Enter the common difference: ";
    cin >> d;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "nth term of AP is: " << nthAPTerm(n,a,d) << endl;    

    return 0;
}