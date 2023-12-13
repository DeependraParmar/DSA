#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int,string> m;

    m[1] = "Learn";
    m[2] = "Logics";
    m[3] = "is";
    m[4] = "Amazing...";

    for(auto i:m){
        cout << i.first << " : " << i.second << endl;
    }

    cout << "Is 5 key present? -> " << m.count(5) << endl;

    // similarly, we have erase and find as well.
    return 0;
}