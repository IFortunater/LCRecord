/*
    只出现一次的数字
    此题直接看答案得，简直太妙了
    a^b^a = a^a^b = 0^b = b
    所以只需要将所有的数字亦或，得到的便是结果
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int num : nums)
            ans ^= num;
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 2, 1};
    Solution s = Solution();
    cout << s.singleNumber(nums) << endl;
    return 0;
}
