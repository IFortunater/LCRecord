#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        if (s.length() == 0)
            return "";
        int index = 0;
        int blank = 0;
        while (s[blank] == ' ')
            blank++;
        s = s.substr(blank);
        blank = s.length()-1;
        while (s[blank] == ' ')
            blank--;
        s = s.substr(0, blank+1);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' || i == s.length() - 1)
            {
                if (i == s.length() - 1)
                    i++;
                reverse(s.begin() + index, s.begin() + i);
                index = i + 1;
            }
        }
        return s;
    }
};

int main(int argc, char const *argv[])
{
    string str = "    Let's take LeetCode contest   ";
    Solution s = Solution();
    cout << s.reverseWords(str) << endl;
    return 0;
}
