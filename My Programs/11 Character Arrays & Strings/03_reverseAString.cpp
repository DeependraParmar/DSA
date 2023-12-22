#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char str[20];
    cout << "Enter the string here: ";
    cin >> str;

    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while(start <= end){
        swap(str[start++],str[end--]);
    }

    cout << "Reversed string is: " << str << endl;

    return 0;
}