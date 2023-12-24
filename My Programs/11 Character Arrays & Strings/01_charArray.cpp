#include <iostream>
using namespace std;

int main(){
    char name[20];
    cout << "Enter your name here: ";
    cin >> name;

    cout << "Your name is: " << name;

    // illustration b/w string and char[]
    char ch[] = {'d','e','\0','e','p'};
    string str = "dee\0p";

    cout << "Character array prints: " << ch << endl;
    cout << "String prints: " << str << endl;

    return 0;
}