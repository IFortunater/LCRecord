// 未做出来
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string convert(string s, int numRows)
    {
        string res = "";
        for (int i = 0; i < numRows; i++)
        {
            for (int j = i; j < s.length(); j = j + numRows)
            {
                
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.convert("LEETCODEISHIRING", 3) << endl;
    return 0;
}

// LCIRETOESIIGEDHN
