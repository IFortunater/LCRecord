// 初步判断，本地采用深度优先搜索策略DFS
#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;

class Solution
{
private:
    map<char, string> number = {
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> res;
    vector<char> cStack;
public:
    vector<string> letterCombinations(string digits)
    {
        DFS(0, digits);
        return res;
    }

    void DFS(int step, string str)
    {
        if (step == str.length()){
            string item = "";
            for (char c : cStack){
                item += c;
            }
            res.push_back(item);
        }
        string c = number[str[step]];
        for (int i = 0; i < c.length(); i++){
            cStack.push_back(c[i]);
            DFS(step+1, str);
            cStack.pop_back();
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    for (string s :s.letterCombinations("23")){
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
