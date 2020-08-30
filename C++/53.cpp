#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = INT32_MIN;
        int count = 0;
        if (nums.size() == 0)
            return sum;
        for (int i = 0; i < nums.size(); i++){
            count += nums[i];
            if (count > sum){
                sum = count;
            }
            if (count < 0){
                count  = 0;
            }
        }
        return sum;
    }
};

// 题解动态规划
// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int pre = 0, maxAns = nums[0];
//         for (const auto &x : nums)
//         {
//             pre = max(pre + x, x);
//             maxAns = max(maxAns, pre);
//         }
//         return maxAns;
//     }
// };

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<int> nums = {};
    cout << s.maxSubArray(nums) << endl;
    return 0;
}
