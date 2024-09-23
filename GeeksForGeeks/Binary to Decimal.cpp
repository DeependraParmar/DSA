/*
class Solution {
  public:
    int binary_to_decimal(string str) {
        int ans = 0;

        for(int i=0; i<str.length(); i++){
            if(str[i] == '1')
                ans += pow(2,str.length()-1-i);
        }

        return ans;
    }
};
*/