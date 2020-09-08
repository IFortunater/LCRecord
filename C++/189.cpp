/*
    旋转数组
    执行用时：16 ms, 在所有 C++ 提交中击败了13.64%的用户
    内存消耗：9.8 MB, 在所有 C++ 提交中击败了79.66%的用户
*/

#include<iostream>
#include<vector>
#include<algorithm>
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

// 暴力解法
// 我服了，这个方法还给了我超时，答案还有暴力解法呢
// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {
//         k = k % nums.size();
//         while (k--){
//             int pre = nums[nums.size()-1];
//             for(int i = nums.size()-2; i >= 0; i--)
//                 nums[i+1] = nums[i];
//             nums[0] = pre;
//         }
//     }
// };

// 环状替换
/*
    这个方法就是把原本每一循环右移一位变成直接循环右移k位了，直接一次完事
    但是同样容易犯一个错误，就是以为循环k次，每次挪动n/k次，这样k*n/k=n
    但是n/k并不总是整数，所以事实上结果并不总是等于n
    而是应该采用一个计数器去记录有多少个挪动到的正确的位置，并且每一轮循环
    挪动，是以回到当前起点下标结束
    具体的可以看题解
*/
// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {   
//         int temp1, temp2, index;
//         k = k % nums.size();
//         int count = 0;
//         for (int i = 0; count < nums.size(); i++){
//             index = i;
//             temp1 = nums[i];
//             do{
//                 index = (index + k) % nums.size();
//                 temp2 = nums[index];
//                 nums[index] = temp1;
//                 temp1 = temp2;
//                 count++;
//             }while(index != i);
//         }
//     }
// };

// 使用反转
/*
    移动k位,则数组后k位会挪到数组的前面，剩下的前面的向后挪k位
    这个就可以转换成1.先全部逆置2.前k位逆置3.后n-k位逆置
*/
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    Solution s = Solution();
    s.rotate(arr, k);
    for (int &num : arr){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
