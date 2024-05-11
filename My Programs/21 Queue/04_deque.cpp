#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(1);
    d.push_front(8);
    d.push_back(9);

    cout << d.front() << endl;
    cout << d.back() << endl;
    d.pop_front();
    cout << d.front() << endl;

    return 0;
}