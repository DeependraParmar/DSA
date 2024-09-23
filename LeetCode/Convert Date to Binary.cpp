/*
class Solution {
private:
    string convertToBinary(int n){
        string ans = "";
        while(n){
            int bit = n & 1;
            ans += to_string(bit);
            n >>= 1;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
public:
    string convertDateToBinary(string input) {
        int year = stoi(input.substr(0,4));
        int month = stoi(input.substr(5,2));
        int date = stoi(input.substr(8,2));

        string strYear = convertToBinary(year);
        string strMonth = convertToBinary(month);
        string strDate = convertToBinary(date);

        return strYear + '-' + strMonth + '-' + strDate;
    }
};
*/