/*
    预测赢家

*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution
{
private:
    int player1 = 0, player2 = 0;
    int i = 0, j;
    int count = 0;
public:
    bool PredictTheWinner(vector<int> &nums)
    {
        j = nums.size() - 1;
        while (i < j){
            if (count % 2 == 0){
                round(player1, nums);
            }else{
                round(player2, nums);
            }
            count++;
        }
        if (player1 > player2)
            return true;
        else
            return false;
    }

    void round(int &player, vector<int> &nums){
        if (nums[i] >= nums[j]){
            player += nums[i];
            i++;
        }else{
            player += nums[j];
            j--;
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 5, 233, 7};
    Solution s = Solution();
    cout << s.PredictTheWinner(nums) << endl;
    return 0;
}
