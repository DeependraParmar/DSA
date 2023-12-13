#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(7);
    v.push_back(10);
    v.push_back(13);
    v.push_back(16);

    cout <<"Search Status: " << binary_search(v.begin(),v.end(),13);

    // similarly, we have min,max,swap functions.

    string str = "Learn Logics is Amazing...";
    reverse(str.begin(),str.end());
    cout << endl << "Reverse of str is: " << str << endl;


    rotate(v.begin(),v.begin() + 1, v.end());
    cout << endl << endl << "Rotated vector is: ";
    for(int i:v){
        cout << i << " ";
    }

    sort(v.begin(),v.end()); // based on intro (quick + heap + insertion) sort.
    cout << endl << endl << "Sorted vector is: ";
    for(int i:v){
        cout << i << " ";
    }
    return 0;
}