#include <iostream>
using namespace std;
char getMaxOccuringCharacter(string s){
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
        // for lowercase character
        char ch = s[i];
        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch -'a';
        }
        // for uppercase character 
        else{
            number = ch - 'A';
        }

        arr[number]++;
    }

    int max = -1, ans = -1;
    for(int i=0; i<26; i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }

    char ansCh = 'a' + ans;
    return ansCh;
}
int main(){
    string s;
    cout << "Enter the String here: ";
    cin >> s;

    cout << "Max occuring character in " << s << " is: " << getMaxOccuringCharacter(s) << endl;
    return 0;
}