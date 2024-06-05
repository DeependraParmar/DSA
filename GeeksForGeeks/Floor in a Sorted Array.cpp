// class Solution
// {
// public:
//     // Function to find floor of x
//     // n: size of vector
//     // x: element whose floor is to find
//     int findFloor(vector<long long> arr, long long n, long long x)
//     {
//         int start = 0;
//         int end = n - 1;
//         int mid = start + (end - start) / 2;
//         int ans = -1;

//         while (start <= end)
//         {
//             if (arr[mid] == x)
//                 return mid;

//             else if (arr[mid] > x)
//                 end = mid - 1;

//             else
//             {
//                 start = mid + 1;
//                 ans = mid;
//             }

//             mid = start + (end - start) / 2;
//         }

//         return ans;
//     }
// };