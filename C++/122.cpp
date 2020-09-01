/*
    买卖股票的最佳实际 II
    执行用时：4 ms, 在所有 C++ 提交中击败了94.28%的用户
    内存消耗：7.7 MB, 在所有 C++ 提交中击败了12.55%的用户
*/

#include<iostream>
#include<vector>
using namespace std;

/*
    思路：其实就是找递增序列，不断的找递增序列，然后用递增序列的最后一个
    减去递增序列的第一个，就是一笔交易所赚的钱，加起来的总和就是最后的收益了
    但是为了方便写程序做计算，可以直接在末尾加上一个0。
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int ans = 0;
        int price = prices[0];
        prices.push_back(0);
        for (int i = 1; i < prices.size(); i++){
            if (prices[i] < prices[i - 1] ){
                ans += (prices[i - 1] - price);
                price = prices[i];
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> prices = {};
    Solution s = Solution();
    cout << s.maxProfit(prices) << endl;
    return 0;
}
