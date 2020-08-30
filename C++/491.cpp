// 递增序列
#include <iostream>
#include <vector>
#include <set>
#include<algorithm>
using namespace std;

// class Solution
// {
// private:
//     set<vector<int>> table;
//     vector<int> isVisit;
//     int Max;
//     // DFS
// public:
//     vector<vector<int>> findSubsequences(vector<int> &nums)
//     {
//         vector<int> sk;
//         // 设置是否访问标志
//         for (int i : nums)
//             isVisit.push_back(0);
//         // 开始DFS搜索
//         Max = *(max_element(nums.begin(), nums.end()));
//         cout << "Max:" << Max <<endl;
//         DFS(sk, nums, 0);
//         return vector<vector<int>>(table.begin(), table.end());
//     }

//     void DFS(vector<int> sk, vector<int> &nums, int index)
//     {
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if (isVisit[i] == 0 && (sk.empty() || (nums[i] >= sk.back() && i > index)))
//             {
//                 isVisit[i] = 1;
//                 sk.push_back(nums[i]);
//                 if (sk.size() >= 2)
//                     table.insert(sk);
//                 if (Max == nums[i]){
//                     sk.pop_back();
//                     isVisit[i] = 0;
//                     return;
//                 }
//                 DFS(sk, nums, i);
//                 sk.pop_back();
//                 isVisit[i] = 0;
//             }
//         }
//     }
// };

class Solution
{
private:
    set<vector<int>> table;
    vector<int> isVisit;
    vector<int> sk;
    int Max;
    // DFS
public:
    vector<vector<int>> findSubsequences(vector<int> &nums)
    {
        // 设置是否访问标志
        for (int i : nums)
            isVisit.push_back(0);
        // 开始DFS搜索
        Max = *(max_element(nums.begin(), nums.end()));
        cout << "Max:" << Max << endl;
        DFS(0, INT16_MIN, nums);
        return vector<vector<int>>(table.begin(), table.end());
    }

    void DFS(int step, int end, vector<int> &nums)
    {
        if (step == nums.size())
        {
            if (sk.size() >= 2)
            {
                table.insert(sk);
            }
            return;
        }
        if (isVisit[step] == 0 && nums[step] >= end)
        {
            sk.push_back(nums[step]);
            if (sk.size() >= 2)
            {
                table.insert(sk);
            }
            isVisit[step] = 1;
            DFS(step + 1, sk[sk.size() - 1], nums);
            isVisit[step] = 0;
            sk.pop_back();
        }
        if (nums[step] != end)
        {
            DFS(step + 1, end, nums);
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<int> nums = {};
    vector<vector<int>> res = s.findSubsequences(nums);
    for (const auto &item : res)
    {
        for (auto i : item)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
