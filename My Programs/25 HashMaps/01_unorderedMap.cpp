#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main(){
    // creation
    unordered_map<string,int> mapping;

    // insertion
    pair<string,int> pair1 = make_pair("deependra", 4);
    mapping.insert(pair1); // way 01
    pair<string,int> pair2("hello", 2); // way 02
    mapping["done"] = 1; // way 03

    // searching in the map
    cout << mapping["deependra"] << endl;
    cout << mapping.at("done") << endl;
    cout << mapping["unknown_key"] << endl;
    cout << mapping.at("unknown_key") << endl;

    // size
    cout << endl << "Size of map is: " << mapping.size() << endl;

    // to check presence 
    cout << mapping.count("deependra") << endl;

    // erase
    mapping.erase("unknown_key");
    cout << mapping.size() << endl;

    // traversing the array
    cout << endl << "Printing the map: " << endl;
    for(auto it:mapping)
        cout << it.first << ": " << it.second << endl;

    // creating iterator for map
    cout << endl << "Priting using iterator: " << endl;
    unordered_map<string, int> :: iterator it = mapping.begin();
    while(it != mapping.end()){
        cout << it->first << ": " << it->second << endl;
        it++;
    }

    return 0;
}
