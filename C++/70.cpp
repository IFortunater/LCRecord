#include<iostream>
using namespace std;


// 时间超限  不可取
// class Solution
// {
// private:
//     int count = 0;
// public:
//     int climbStairs(int n)
//     {
//         calculate(n);
//         return count;
//     }

//     void calculate(int n){
//         if (n == 0){
//             count++;
//             return;
//         }
//         if (n < 0)
//             return;
//         calculate(n-1);
//         calculate(n-2);
//     }
// };

// 仔细分析后得出：每一个数字n都是由前一个数字(n-1)+1和前两个数字(n-2)+2得来
// 所以到n的方案数等于到(n-1)的方案数+(n-2)的方案数
// 所以f(n) = f(n-1) + f(n-2)
// 这是是不是就像是斐波那契呢
class Solution
{
private:
    int count = 0;

public:
    int climbStairs(int n)
    {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        int pre1 = 1, pre2 = 2;
        int res;
        for (int i = 3; i <= n; i++){
            res = pre1 + pre2;
            pre1 = pre2;
            pre2 = res;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.climbStairs(4) << endl;
    return 0;
}
