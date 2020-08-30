#include<iostream>
#include<map>
#include<string>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> dict = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int value = 0;
        for (int i = 0; i < s.length() - 1; i++){
            if (dict[s[i]] >= dict[s[i+1]]){
                value += dict[s[i]];
            }else{
                value -= dict[s[i]];
            }
        }
        value += dict[s[s.length() - 1]];
        return value;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.romanToInt("LVIII");
    return 0;
}
