#include<iostream>
#include<string>
#include<stack>
#include<map>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> sk;
        map<char, char> brackets = { {'(', ')'}, {'[', ']'}, {'{', '}'}};
        char tem;
        for (int i = 0; i < s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                sk.push(s[i]);
            }else{
                if (sk.empty() == true)
                    return false;
                tem = sk.top();
                sk.pop();
                if (s[i] != brackets[tem])
                    return false;
            }
        }
        if (sk.empty() == false)
            return false;
        return true;
    }
};

int main(){
    Solution s = Solution();
    string str = "[({)}]";
    cout << s.isValid(str) << endl;
}