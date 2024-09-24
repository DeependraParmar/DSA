#include <iostream>
using namespace std;

bool isPalindrome(string &str, int i){
    if(i >= str.size()/2)
        return true;

    if(str[i] != str[str.size()-i-1])
        return false;
    
    isPalindrome(str, i+1);
}
int main(){
    string str;
    cout << "Enter the string for palindrome check: ";
    cin >> str;

    cout << "String is: " << str << endl;
    cout << "Length is: " << str.length() << endl;

    string ans = isPalindrome(str, 0) ? "true" : "false";

    cout << "Palindrome check for \"" << str << "\" returns: " << ans ? "true" : "false";

    return 0;
}