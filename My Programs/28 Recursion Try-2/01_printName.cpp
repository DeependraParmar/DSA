#include <iostream>
using namespace std;

void printName(int n){
    if(n==0)
        return;
    
    cout << n << ": Deependra Parmar" << endl;
    printName(n-1);
}
int main(){
    printName(5);
    return 0;
}