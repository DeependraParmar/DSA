#include <iostream>
#include <set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(1);
    s.insert(3);
    s.insert(0);

    cout << "Set looks like: ";
    for(auto i:s){
        cout << i <<" ";
    }

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    cout << endl << endl << "Set after erase operation: ";
    for(auto i:s){
        cout << i << " ";
    }

    cout << endl << endl << "Is 5 there? -> " << s.count(5) << endl;
    cout << "Is 7 there? -> " << s.count(7) << endl;


    set<int>::iterator findItr = s.find(5);
    cout << "Value stored at iterator is: " << *findItr << endl;
    return 0;
}