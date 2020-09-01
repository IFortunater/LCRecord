/*
    旋转数组
    还未解决
*/

#include<iostream>
#include<vector>
using namespace std;


// 时间超限
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k = k % nums.size();
//         while (k--){
//             int ass = nums[nums.size()-1];
//             nums.erase(nums.end()-1, nums.end());
//             nums.insert(nums.begin(), ass);
//         }
//     }
// };

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        while (k--)
        {
            int ass = nums[nums.size()-1];
            for (int i = nums.size() - 1; i >= 0; i--)
                nums[i+1] = nums[i];
            nums[0] = ass;
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr = {-1, -100, 3, 99};
    int k = 2   ;
    Solution s = Solution();
    s.rotate(arr, k);
    for (int &num : arr){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
