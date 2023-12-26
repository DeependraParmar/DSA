/*
#include <bits/stdc++.h>
string stringSum(string &num1, string &num2) {
    int l1 = num1.length()-1;
    int l2 = num2.length()-1;

    int carry = 0;
    string ans="";

    // loop until which the strings are running equal
    while(l1>=0 && l2>=0){
        int current = (num1[l1]-'0') + (num2[l2]-'0') + carry;
        ans += to_string((current%10));

        if(current>=10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        l1--;
        l2--;
    }

    // loop till which l1 has some characters left
    while(l1>=0){
        int current = (num1[l1]-'0') + carry;
        ans += to_string((current%10));
        if(current>=10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        l1--;
    }

    // loop till which l2 still has some characters left
    while(l2>=0){
        int current = (num2[l2]-'0') + carry;
        ans += to_string((current%10));
        if(current>=10){
            carry = 1;
        }
        else{
            carry = 0;
        }
        l2--;
    }

    if(carry){
        ans+= to_string(carry);
    }

    reverse(ans.begin(),ans.end());
    return ans;
}
*/