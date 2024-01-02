#include <iostream>
using namespace std;

bool checkPalindrome(string s, int start, int end){
    if(start > end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    else{
        bool ans = checkPalindrome(s, start+1, end-1);
        return ans;
    }
}
int main(){
    string s;
    cout << "Enter the string for palidrome check: ";
    getline(cin, s);

    bool ans = checkPalindrome(s,0,s.length()-1);
    
    if(ans){
        cout << s << " is a Palindrome" << endl;
    }
    else{
        cout << s << " is not a Palindrome" << endl;
    }

    return 0;
}