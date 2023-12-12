#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arr; // normal vector
    vector<int> sizedVector(10,1); // vector of size 10, initialised with 1.

    vector<int> copy(sizedVector); // creating a copy of a.

    cout << "Capacity of vector arr: " << arr.capacity() << endl;

    // Pushing an element in the array 
    arr.push_back(1);
    cout << "Capacity: " << arr.capacity() << endl;

    arr.push_back(2);
    cout << "Capacity: " << arr.capacity() << endl;

    arr.push_back(3);
    cout << "Capacity: " << arr.capacity() << endl;


    // Element at direct index 
    cout << "Element at 2nd index is: " << arr.at(2) << endl;


    // Finding front 
    cout << "Front element: " << arr.front() << endl;

    // Finding back 
    cout << "Back element: " << arr.back() << endl;


    // Popping element from vector 
    cout << endl << "Vector before Pop: ";
    for(int i:arr){
        cout << i << " ";
    }

    arr.pop_back();

    cout << endl << "Vector after Pop: ";
    for(int i:arr){
        cout << i << " ";
    }


    cout << endl << "Size before clear: " << arr.size() << endl;
    arr.clear();
    cout << endl << "Size after clear: " << arr.size() << endl;


    return 0;
}