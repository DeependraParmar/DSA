/*
pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x) {
    int floor = INT_MIN, ceil = INT_MAX;
    pair<int,int> ans;
    int start = 0, end = n-1, mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] <= x){
            floor = arr[mid];
            start = mid+1;
        }
        if(arr[mid] >= x){
            ceil = arr[mid];
            end = mid-1;
        }

        mid = start + (end-start)/2;
    }

    if(floor == INT_MIN)
        floor = -1;
    if(ceil == INT_MAX)
        ceil = -1;

    ans = make_pair(floor, ceil);
    return ans;
}
*/