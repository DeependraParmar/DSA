#include <iostream>
using namespace std;

void printNameByHeadResursion(int n){
    if(n==0)
        return;
    
    cout << n << ": Deependra Parmar" << endl;
    printNameByHeadResursion(n-1);
}
void printNameByTailResursion(int n){
    if(n==0)
        return;
    
    printNameByTailResursion(n-1);
    cout << n << ": Deependra Parmar" << endl;
}
int main(){
    printNameByHeadResursion(5);

    cout << endl << endl;

    printNameByTailResursion(5);
    return 0;
}