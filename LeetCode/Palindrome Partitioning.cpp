/*
class Solution {
public:
    bool checkpalindrome(string s, int start, int end){
        while(start <= end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }

    void solve(string s,int index,vector<string> path,vector<vector<string>>&ans){
        if(index == s.length()){
            ans.push_back(path);
            return;
        }
        for(int i=index;i<s.length();i++){
            if(checkpalindrome(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                solve(s,i+1,path,ans);
                path.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(s,0,path,ans);
        return ans;
    }
};
*/