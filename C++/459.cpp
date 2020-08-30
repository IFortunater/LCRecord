/*
    看评论区做的，但是收获颇多
    题目如下：给定一个非空的字符串，判断它是否可以由它的一个子串重复多次构成。给定的字符串只含有小写英文字母，并且长度不超过10000。
    思路如下：假设母字符串S由字串s重复N次构成，则S=Ns.则两个母串拼接在一起构成串t, t=2S=2Ns.若是将t的前后两个字符去掉，则t=2(N-1)个s
    而S=N个s.若是t中包含s,则2(N-1) >= N,则N>=2,所以S是由至少两个构成的串，则返回true，否则返回false
*/

#include<iostream>
#include<string>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        string str = s + s;
        str = str.substr(1, str.size() - 2);
        if (str.find(s) == -1)
            return false;
        else
            return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.repeatedSubstringPattern("abcabc") << endl;
    return 0;
}
