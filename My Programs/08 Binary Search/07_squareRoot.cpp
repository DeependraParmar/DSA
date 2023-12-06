#include <iostream>
using namespace std;
int squareRoot(int n){
    int start = 0;
    int end = n;

    int mid = start + (end-start)/2;
    int ans = -1;

    while(start <= end){
        int square = mid*mid;
        if(square == n){
            return mid;
        }
        else if(square < n){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
double preciseSqrt(int n, int precision, int floorSqrt){
    double factor = 1;
    double ans = floorSqrt;

    for(int i=0; i<precision; i++){
        factor /= 10;
        for(double j=ans; j*j<n; j+=factor){
            ans = j;
        }
    }

    return ans;
}
int main(){
    int n,precision;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the precision of square root: ";
    cin >> precision;


    int floorValue = squareRoot(n);
    cout << "Square root of " << n << " is: " << preciseSqrt(n,precision,floorValue);
    
    return 0;
}