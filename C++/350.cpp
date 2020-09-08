/*
    两个数组的交集 II
    执行用时：8 ms, 在所有 C++ 提交中击败了95.42%的用户
    内存消耗：10.2 MB, 在所有 C++ 提交中击败了94.74%的用户
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
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;
        if (nums1.size()==0 || nums2.size() == 0)
            return ans;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()){
            if (nums1[i] <= nums2[j]){
                if (nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    j++;
                }
                i++;
            }else
                j++;
            
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr1 = {4, 9, 5};
    vector<int> arr2 = {9, 4, 9, 8, 4};
    Solution s = Solution();
    for (int i : s.intersect(arr1, arr2)){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}