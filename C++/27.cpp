#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        if (nums.size() == 0)
            return 0;
        int index = nums.size();
        for (int i = 0; i < index; i++)
        {
            if (nums[i] == val)
            {
                while (index-1 >= i){
                    if (nums[index-1] != val){
                        index--;
                        nums[i] = nums[index];
                        break;
                    }else
                        index--;
                }
            }
        }
        return index;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> num = {3, 2, 2, 3};
    int val = 3;
    Solution s = Solution();
    int lens = s.removeElement(num, val);
    cout << lens << endl;
    for (int i = 0; i< lens; i++)
        cout << num[i] << " ";
    cout << endl;
    return 0;
}
