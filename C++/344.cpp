/*
    反转字符串
    执行用时：52 ms, 在所有 C++ 提交中击败了84.39%的用户
    内存消耗：22.6 MB, 在所有 C++ 提交中击败了91.64%的用户
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int len = s.size();
        char temp;
        for (int i = 0, j = len - 1; i < j; i++, j--){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<char> str = {'a', 'b', 'c', 'd', 'e', 'f'};
    Solution s = Solution();
    s.reverseString(str);
    for (char &c : str){
        cout << c << " ";
    }
    cout << endl;
    return 0;
}