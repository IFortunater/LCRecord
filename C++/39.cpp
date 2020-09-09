/*
    组合总和 DFS和剪枝回溯
    执行用时：124 ms, 在所有 C++ 提交中击败了8.43%的用户
    内存消耗：14.2 MB, 在所有 C++ 提交中击败了21.71%的用户
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution
{
private:
    set<vector<int>> ans;

public:
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<int> item;
        sort(candidates.begin(), candidates.end());
        DFS(candidates, target, item);
        vector<vector<int>> res(ans.begin(), ans.end());
        return res;
    }

    void DFS(vector<int> &nums, int remain, vector<int> &item)
    {
        if (remain == 0){
            vector<int> temp(item.begin(), item.end());
            sort(temp.begin(), temp.end());
            ans.insert(temp);
            return;
        }
        for (int i = nums.size()-1; i >= 0; i--)
        {
            if (remain - nums[i] >= 0){
                item.push_back(nums[i]);
                DFS(nums, remain-nums[i], item);
                item.pop_back();
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {2, 3, 5};
    int target = 8;
    Solution s = Solution();
    for (vector<int> arr : s.combinationSum(nums, target)){
        for (int i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
