/*
#include <bits/stdc++.h>
void reverse(vector<int> &v){
    int start = 0;
    int end = v.size() -1;

    while(start <= end){
        swap(v[start++],v[end--]);
    }
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
    int i = n-1;
    int j = m-1;
    int carry = 0;

    vector<int> ans;

    while(i>=0 && j>=0){
        int value1 = a[i];
        int value2 = b[j];

        int sum = value1 + value2 + carry;
        carry = sum/10;
        sum = sum%10;

        ans.push_back(sum);
        i--;
        j--;
    }

    // when the overlapping part is over and array a has elements left
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }

    // when the overlapping part is over and array b has elements left
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }

    // when carry is left at the end
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }

    reverse(ans);
    return ans;
}
*/