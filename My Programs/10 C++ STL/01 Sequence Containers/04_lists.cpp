#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l;

    l.push_front(2);
    l.push_front(1);
    l.push_back(3);
    l.push_back(4);

    cout << "Printing the list: ";
    for(int i:l){
        cout << i << " ";
    }

    l.erase(l.begin());

    cout << endl << endl << "List after erase: ";
    for(int i:l){
        cout << i << " ";
    }
    return 0;
}