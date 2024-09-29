/*
class Solution {
public:
    int numberOfSubstrings(string s) {
        int lastSeen[] = {-1, -1, -1};
        int count = 0;
        int n = s.length();

        for(int i=0; i<n; i++){
            lastSeen[s[i] - 'a'] = i;

            if(lastSeen[0] != -1 && lastSeen[1] != -1 && lastSeen[2] != -1)
                count = count + ( 1 + min(lastSeen[0], min(lastSeen[1], lastSeen[2])));
        }
        return count;
    }
};
*/