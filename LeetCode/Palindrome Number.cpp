/*
class Solution {
private:
int reverse(int x){
    long long int ans = 0;
    while(x!=0){
        int rem = x%10;
        ans = (ans*10) + rem;
        x/=10;
    }
    return ans;
}
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x == reverse(x)){
            return true;
        }
        return false;
    }
};
*/