/*
    存在重复元素
    执行用时：64 ms, 在所有 C++ 提交中击败了91.15%的用户
    内存消耗：15.3 MB, 在所有 C++ 提交中击败了80.07%的用户
    先排序，后判断
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-1; i++){
            if (nums[i] == nums[i+1])
                return false;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {};
    Solution s = Solution();
    cout << s.containsDuplicate(nums) << endl;
    return 0;
}
