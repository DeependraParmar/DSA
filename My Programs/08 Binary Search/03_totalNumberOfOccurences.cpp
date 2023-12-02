#include <iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int arr[6] = {1, 2, 2, 2, 4, 5};
    int first = firstOccurence(arr, 6, 2);
    int last = lastOccurence(arr, 6, 2);

    cout << "Total Number of Occurences is: " << (last-first+1) << endl;

    return 0;
}