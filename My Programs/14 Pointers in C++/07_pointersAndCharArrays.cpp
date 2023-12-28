#include <iostream>
using namespace std;

int main(){
    int arr[10] = {0};
    char ch[6] = "raghu"; 
    char *chptr = ch;

    cout << "arr prints: " << arr << endl; // prints base address
    cout << "ch prints: " << ch << endl; // prints the whole string
    cout << "chptr prints: " << chptr << endl; // prints the whole string even being a pointer

    // Conclusion: implementation of the cout function is different for arrays ans character arrays 
    return 0;
}