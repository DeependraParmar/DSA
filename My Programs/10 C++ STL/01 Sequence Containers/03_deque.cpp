#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque <int> dq;

    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);

    cout << "Elements in Deque are: ";
    for(int i:dq){
        cout << i << " ";
    }

    // dq.pop_back();

    // cout << endl << endl << "Elements after pop_back() are: ";
    // for(int i:dq){
    //     cout << i << " ";
    // }


    // dq.pop_front();

    // cout << endl << endl << "Elements after pop_front() are: ";
    // for(int i:dq){
    //     cout << i << " ";
    // }


    cout << endl << endl << "First element: " << dq.at(0) << endl;
    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    cout << "Is deque empty: " << dq.empty() << endl;

    cout << endl << "Size before erase: " << dq.size() << endl;
    dq.erase(dq.begin(),dq.begin() + 1);
    cout << "Size after erase: " << dq.size() << endl;

    return 0;
}