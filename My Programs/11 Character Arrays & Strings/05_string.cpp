#include <iostream>
using namespace std;
int returnInteger(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int number = s[i] - '0';
        ans = (ans * 10) + number;
    }

    return ans;
}
int main(){
    int n = returnInteger("2011");
    int m = returnInteger("2013");

    int sum = n+m;
    cout << "Sum is: " << sum << endl;

    string ans = to_string(sum);

    cout << "String is: " << ans << endl;

    return 0;
}