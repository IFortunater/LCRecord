#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int index = 0;
        if (nums.size() == 0)
            return 0;
        for (int i = 0; i < nums.size(); i++){
            if (nums[index] != nums[i]){
                nums[index+1] = nums[i];
                index++;
            }
        }
        return index + 1;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<int> num = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int lens = s.removeDuplicates(num);
    for (int i = 0; i < lens; i++){
        cout << num[i] << " ";
    }
    cout << endl;
    return 0;
}
