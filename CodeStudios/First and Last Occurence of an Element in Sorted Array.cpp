// int firstPosition(vector<int> &arr, int n, int x)
// {
//     int start = 0;
//     int end = n - 1;
//     int ans = -1;

//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == x)
//         {
//             ans = mid;
//             end = mid - 1;
//         }
//         else if (arr[mid] < x)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }
// int lastPosition(vector<int> &arr, int n, int x)
// {
//     int start = 0;
//     int end = n - 1;
//     int ans = -1;

//     int mid = start + (end - start) / 2;

//     while (start <= end)
//     {
//         if (arr[mid] == x)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else if (arr[mid] < x)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
// {
//     pair<int, int> ans;
//     int a = firstPosition(arr, n, x);
//     int b = lastPosition(arr, n, x);
//     ans.first = a;
//     ans.second = b;

//     return ans;
// }
