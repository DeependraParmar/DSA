/*
int findDuplicate(vector<int> &arr)
{
    // Write your code here
    int ans = 0;

    // removing the duplicate of the array and we'll get the array with unique elements
    for(int i=0; i<arr.size(); i++){
        ans = ans ^ arr[i];
    }

    // now, we'll xor 1-(n-1) with ans to get the duplicate in the array
    for(int i=1; i<arr.size(); i++){
        ans = ans ^ i;
    }

    return ans;
}

*/