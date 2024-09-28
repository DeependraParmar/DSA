/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char, int> visited;

        for(int i=0; i<s.length(); i++)
            visited[s[i]] = -1;

        int left = 0, right = 0, ans = 0;

        while(right < n){
            if(visited[s[right]] != -1){
                if(visited[s[right]] >= left)
                    left = visited[s[right]] + 1;
            }

            ans = max(ans, right-left+1);
            visited[s[right]] = right;
            right++;
        }

        return ans;
    }
};
*/