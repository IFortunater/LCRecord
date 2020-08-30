#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Solution
{
private:
    vector<string> romanKey = {"I", "IV", "V", "IX", "X",
                           "XL", "L", "XC", "C",
                           "CD", "D", "CM", "M"};
    vector<int> value = {1, 4, 5, 9, 10, 40, 50, 90, 100,
                         400, 500, 900, 1000};

public:
    string intToRoman(int num)
    {
        string res = "";
        int index = value.size()-1;
        for (int i = index; i >= 0; i--){
            if (num >= value[i]){
                for (int j = num/value[i]; j > 0; j--)
                    res += romanKey[i];
                num = num%value[i];
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.intToRoman(20) << endl;
    return 0;
}
