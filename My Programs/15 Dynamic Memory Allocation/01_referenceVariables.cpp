#include <iostream>
using namespace std;

int main(){
    int i = 7;
    int &j = i;

    cout << "i pointing to: " << &i << endl;
    cout << "j pointing to: " << &j << endl;

    cout << i << endl;
    cout << j << endl;

    cout << ++i << endl;
    cout << ++j << endl;

    return 0;
}