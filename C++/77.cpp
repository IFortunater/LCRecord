/*
    组合
    执行用时：120 ms, 在所有 C++ 提交中击败了19.36%的用户
    内存消耗：10.1 MB, 在所有 C++ 提交中击败了55.52%的用户

    思路：
    最简单的方法就是递归DFS，但是时间和空间效率都不高
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution
{
private:
    vector<vector<int>> ans;

public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<int> arr;
        DFS(0, n, k, arr);
        return ans;
    }

    void DFS(int step, int &n, int &k, vector<int> &arr)
    {
        if (step == k)
        {
            ans.push_back(arr);
            return;
        }
        int start = 0;
        if (!arr.empty())
            start = arr.back();
        for (int i = start + 1; i <= n; i++)
        {
            arr.push_back(i);
            DFS(step + 1, n, k, arr);
            arr.pop_back();
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    for (vector<int> arr : s.combine(4, 3)){
        for (int i : arr){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}