/*
#include <bits/stdc++.h>
void heapify(vector<int> &arr, int n, int index){
    int min = index;
    int left = (2*index) + 1;
    int right = (2*index) + 2;

    if(left < n && arr[left] < arr[min])
        min = left;

    if(right < n && arr[right] < arr[min])
        min = right;

    if(min != index){
        swap(arr[min], arr[index]);
        heapify(arr, n, min);
    }
}
vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i=n/2-1; i>=0; i--)
        heapify(arr, n, i);

    return arr;
}

*/