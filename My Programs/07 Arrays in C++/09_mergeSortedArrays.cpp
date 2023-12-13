#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    int arr1[5] = {2,5,8,12,45};
    int arr2[4] = {3,7,9,11};

    int n = 5;
    int m = 4;

    vector<int> ans;

    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else if(arr1[i] > arr2[j]){
            ans.push_back(arr2[j++]);
        }
    }

    // copy first array elements{}
    while(i<n){
        ans.push_back(arr1[i++]);
    }

    // copy second array elements
    while(j<m){
        ans.push_back(arr2[j++]);
    }

    for(int i:ans){
        cout << i <<" ";
    }

    return 0;
}