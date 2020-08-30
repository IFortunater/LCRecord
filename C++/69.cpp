#include<iostream>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 0, h = x;
        int ans = 0;
        while (l <= h){
            int mid = (l + h) / 2;
            if ((long long)mid * mid <= x){
                ans = mid;
                l = mid + 1;
            }else{
                h = mid - 1;
            }
        }
        return ans;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.mySqrt(145) << endl;
    return 0;
}
