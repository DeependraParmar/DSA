/*
class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        string temp;

        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                if(temp.size() > 0)
                    stk.push(temp);
                temp = "";
            }
            else
                temp += s[i];
        }

        if(temp.size() > 0)
            stk.push(temp);

        string ans = "";
        string word = "";

        while(!stk.empty()){
            word = stk.top();
            stk.pop();
            ans += word;

            if(!stk.empty())
                ans += ' ';
        }

        return ans;
    }
};
*/