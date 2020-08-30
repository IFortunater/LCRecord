#include<iostream>
#include<cmath>
using namespace std;

class Solution
{
public:
    // 第一种方法
    // int rangeBitwiseAnd(int m, int n)
    // {
    //     int count = 0;
    //     long res = 0;
    //     while (m != 0){
    //         if ((n - m < 2) && (n % 2 != 0) && (m % 2) != 0){
    //             res += pow(2, count);
    //         }
    //         count++;
    //         m = m / 2;
    //         n = n / 2;
    //     }
    //     return res;
    // }

    // 第二种方法
    // int rangeBitwiseAnd(int m, int n)
    // {
    //     while (m < n)
    //     {
    //         // 抹去最右边的 1
    //         n = n & (n - 1);
    //     }
    //     return n;
    // }

    //  官方第一种
    int rangeBitwiseAnd(int m, int n)
    {
        int shift = 0;
        // 找到公共前缀
        while (m < n)
        {
            m >>= 1;
            n >>= 1;
            ++shift;
        }
        return m << shift;
    }
};

int main(){
    Solution s = Solution();
    cout << s.rangeBitwiseAnd(12, 12) << endl;
}