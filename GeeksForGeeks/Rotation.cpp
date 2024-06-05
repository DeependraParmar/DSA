/*
class Solution{
public:
    int findKRotation(int arr[], int n) {
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;

        while(start < end){
            if(arr[mid] > arr[end])
                start = mid+1;
            else
                end = mid;

            mid = start + (end-start)/2;
        }

        return end;
    }

};
*/