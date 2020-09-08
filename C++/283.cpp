/*
    移动零 看了题解
    执行用时：12 ms, 在所有 C++ 提交中击败了52.18%的用户
    内存消耗：9.2 MB, 在所有 C++ 提交中击败了7.98%的用户

    思路：用两个指针，分别是慢指针和快指针
    快指针是用于扫描数组，寻找非零元素的指针，而慢指针是用于指向
    快指针找到非零元素后需要与其调换的位置。
    寻找到一个非零元素，非零元素需要和其之前的某个位置或这当前位置进行交换
    并且当前元素将会放上本身的非零元素，或者0，那么扫一边下来即可得到结果
    描述得不清晰，不懂自己按照代码推导一下就懂了
*/

#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
       for (int lastNoneZeroAt = 0, cur = 0; cur < nums.size(); cur++){
           if (nums[cur] != 0){
               swap(nums[lastNoneZeroAt++], nums[cur]);
           }
       } 
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution s = Solution();
    s.moveZeroes(nums);
    for (int i : nums){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
