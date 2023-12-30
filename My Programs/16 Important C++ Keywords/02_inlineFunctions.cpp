#include <iostream>
using namespace std;
inline int getMax(int &a, int &b){
    return (a>b)?a:b;
}
int main(){
    int a=1,b=4;
    int ans = getMax(a,b); // inline functions replace function call by function body before code compilation. It increases code performance by reducing function call overhead.
    cout << "Ans is: " << ans << endl;

    return 0;
}