/*
class Solution {
bool isValidVowel(char ch){
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
        return true;
    }
    else{
        return false;
    }
}
public:
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;

        while(start<=end){
            if(isValidVowel(s[start])){
                if(isValidVowel(s[end])){
                    swap(s[start++],s[end--]);
                }
                else{
                    end--;
                }
            }
            else{
                start++;
            }
        }

        return s;
    }
};
*/