#include <iostream>
using namespace std;
void update(int &n){
    n++;
}
int main(){
    int num = 7;
    cout << "num before updation: " << num << endl;
    update(num);
    cout << "num after updation: " << num << endl;

    return 0;
}