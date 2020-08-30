#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int i;
        for (i = 0; i < nums.size(); i++)
        {
            if (target <= nums[i])
                break;
        }
        return i;
    }
};

// // 二分查找 但是效果不见得更好
// class Solution
// {
// public:
//     int searchInsert(vector<int> &nums, int target)
//     {
//         int n = nums.size();
//         int left = 0, right = n - 1, ans = n;
//         while (left <= right)
//         {
//             int mid = ((right - left) >> 1) + left;
//             if (target <= nums[mid])
//             {
//                 ans = mid;
//                 right = mid - 1;
//             }
//             else
//             {
//                 left = mid + 1;
//             }
//         }
//         return ans;
//     }
// };

int
main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<int> v = {1, 3, 5, 6};
    int num = 0;
    cout << s.searchInsert(v, num) << endl;
    return 0;
}