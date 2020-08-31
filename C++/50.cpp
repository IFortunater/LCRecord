/*
    Pow(x, n)
    执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
    内存消耗：6.3 MB, 在所有 C++ 提交中击败了5.01%的用户
*/
#include<iostream>
#include<cmath>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        bool isNagtive = false;
        if (x < 0 && n % 2 == 1)
            isNagtive = true;
        x = abs(x);
        if (isNagtive)
            return -exp(n * log(x));
        else
            return exp(n * log(x));
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.myPow(-2, 2) << endl;
    return 0;
}
