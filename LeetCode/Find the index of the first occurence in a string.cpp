/*
class Solution {
public:
    int strStr(string str, string s) {
        int left = 0, right = 0;
        int n = str.size();
        int m = s.size();

        for(int i=0; i<m-1; i++)
            right++;

        while(right < n){
            string st = str.substr(left, right-left+1);

            if(st == s)
                return left;

            left++;
            right++;
        }

        return -1;
    }
};
*/