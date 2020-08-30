#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
            return "1";
        string str = "1";
        string res = "";
        int count = 0;
        for (int i = 0; i < n - 1; i++)
        {
            res = "";
            for (int j = 0; j < str.length(); j++)
            {
                count++;
                if (str[j] != str[j + 1] || j == str.length() - 1)
                {
                    res += to_string(count) + str[j];
                    count = 0;
                }
            }
            str = res;
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.countAndSay(7) << endl;
    return 0;
}
