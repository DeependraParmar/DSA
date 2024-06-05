/*
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    pair<int,int> ans;
    int floor = INT_MIN, ceil = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i] <= x && arr[i] > floor)
            floor = arr[i];

        if(arr[i] >= x && arr[i] < ceil)
            ceil = arr[i];
    }

    if(floor == INT_MIN)
        floor = -1;
    if(ceil == INT_MAX)
        ceil = -1;

    ans.first = floor;
    ans.second = ceil;

    return ans;
}
*/