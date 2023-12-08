/*
#include <bits/stdc++.h>
bool isPossible(vector<int> pages, int n, int b, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + pages[i] <= mid){
            pageSum += pages[i];
        }
        else{
            studentCount++;
            if(studentCount > b || pages[i] > mid){
                return false;
            }
            pageSum = pages[i];
        }
    }

    return true;
}
int allocateBooks(vector<int> &pages, int n, int b)
{
    int start = 0;
    int sum = 0;

    if(n<b){
        return -1;
    }

    for(int i=0; i<n; i++){
        sum += pages[i];
    }

    int end = sum;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start <= end){
        if(isPossible(pages,n,b,mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
}
*/