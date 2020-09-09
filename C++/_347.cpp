/*
    前k个高频元素
    需要排序，用堆或者快排
*/
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include<algorithm>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> ans;
        map<int,int> table;
        for (int i = 0; i < nums.size(); i++){
            table[nums[i]]++;
        }

        map<int, int>::iterator iter;
        for (iter = table.begin(); iter != table.end(); iter++){
            cout << iter->first << " " << iter->second << endl;
        }
        
        return ans;
    }

    int findMax()
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 3};
    Solution s = Solution();
    s.topKFrequent(nums, 2);
    return 0;
}