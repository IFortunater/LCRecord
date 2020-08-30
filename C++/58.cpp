#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        if (s.length() == 0)
            return 0;
        int len = 0;
        bool flag = true;
        reverse(s.begin(), s.end());
        int i = 0;
        while ((s[i] != ' ' || flag) && i < s.length() ){
            if (s[i] != ' '){
                flag = false;
                len++;
            }
            i++;
        }
        return len;
    }
};

int main(int argc, char const *argv[])
{
    string str = " ";
    Solution s = Solution();
    cout << s.lengthOfLastWord(str) << endl;
    return 0;
}
