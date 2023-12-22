#include <iostream>
using namespace std;

int main(){
    char name[20];
    cout << "Enter you name here: ";
    cin >> name;

    int i = 0;

    while(name[i] != '\0'){
        i++;
    }

    cout << "Length of the String is: " << i << endl;


    return 0;
}