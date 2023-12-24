/*
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int n = word1.length();
        int m = word2.length();
        string ans;

        //condition 01: till strings are equal
        while(i<n && j<m){
            ans.push_back(word1[i++]);
            ans.push_back(word2[j++]);
        }

        // condition 02: word1 still have characters left
        while(i<n){
            ans.push_back(word1[i++]);
        }

        // condition 03: word2 still have characters left
        while(j<m){
            ans.push_back(word2[j++]);
        }

        return ans;
    }
};
*/