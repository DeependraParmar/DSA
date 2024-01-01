#include <iostream>
using namespace std;

void inputArray(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << "["<< i << "]: ";
        cin >> arr[i];
    }
}
bool linearSearch(int *arr, int n, int target){
    if(n==0){
        return false;
    }
    if(arr[0] == target){
        return true;
    }
    else{
        int ans = linearSearch(arr+1, n-1, target);
        return ans;
    }
}
int main(){
    int n, target;
    cout << "Enter the size of array: ";
    cin >> n;

    int *arr = new int[n];
    inputArray(arr,n);

    cout << endl << "Enter the target to search: ";
    cin >> target;

    int ans = linearSearch(arr,n,target);
    
    if(ans){
        cout << target << " found" << endl;
    }
    else{
        cout << target <<  " not found" << endl;
    }

    return 0;
}