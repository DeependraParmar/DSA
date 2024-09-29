/*
class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0, n = s.size();
        unordered_map<char,int> map;
        int left = 0, right = 0;
        int maxFreq = 0;
        int reqFreq;

        while(right < n){
            map[s[right]]++;
            maxFreq = max(maxFreq, map[s[right]]);
            reqFreq = (right-left+1) - maxFreq;

            if(reqFreq <= k)
                ans = max(ans, right-left+1);
            else{
                if(reqFreq > k){
                    map[s[left]]--;
                    maxFreq = max(maxFreq, map[s[left]]);
                    left++;
                    reqFreq = (right-left+1) - maxFreq;
                }
            }

            right++;
        }

        return ans;
    }
};
*/