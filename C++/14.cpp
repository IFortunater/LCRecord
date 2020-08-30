#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
public:
    // 第一种解法 纵向比较法
    string longestCommonPrefix(vector<string> &strs)
    {
        string res = "";
        if (strs.size() == 0)
            return res;
        for (int j = 0; j < strs[0].length(); j++){
            for (int i = 0; i < strs.size(); i++){
                if (strs[0][j] == strs[i][j])
                    continue;
                else
                    return res;
            }
            res += strs[0][j];
        }
        return res;
    }


};

int main(int argc, char const *argv[])
{
    vector<string> strs = {"flower", "flow", "flight"};
    Solution s = Solution();
    cout << s.longestCommonPrefix(strs);
    return 0;
}
