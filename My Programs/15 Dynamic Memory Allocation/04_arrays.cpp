#include <iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int i=0; i<n; i++)
        sum+=arr[i];
    
    return sum;
}
int main(){
    int n;
    cout << "Enter the size of n: ";
    cin >> n;

    int *arr = new int[n];

    for(int i=0; i<n; i++){
        cout << i << ": ";
        cin >> arr[i];
    }

    int ans = getSum(arr,n);
    cout << "Sum of all elements of array is: " << ans << endl;

    free(arr);
    
    return 0;
}