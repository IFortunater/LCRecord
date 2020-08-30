#include<iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
            return false;
        else
        {
            long y = 0;
            int xcopy = x;
            while (xcopy != 0)
            {
                y = y * 10 + xcopy % 10;
                xcopy = xcopy / 10;
            }
            if (x == y)
                return true;
            else
                return false;
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.isPalindrome(-121) << endl;
    return 0;
}
