/*
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length() == 0)
            return 0;

        int ans = INT_MIN;
        int n = s.length();


        for(int i=0; i<n; i++){
            unordered_map<char, int> mapping;
            for(int j=i; j<n; j++){
                char ch = s[j];

                if(mapping[ch] >= 1)
                    break;

                ans = max(ans, j-i+1);
                mapping[ch]++;
            }
        }

        return ans;
    }
};
*/