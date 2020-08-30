#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Solution
{
public:
    bool judgeCircle(string moves)
    {
        int pos[2] = {0, 0};
        for (const char &c : moves){
            if (c == 'R'){
                pos[0]++;
            }else if (c == 'L'){
                pos[0]--;
            }else if ( c == 'U'){
                pos[1]++;
            }else
            {
                pos[1]--;
            }
        }
        if (pos[0] == 0 && pos[1] == 0)
            return true;
        else
            return false;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    cout << s.judgeCircle("UD") << endl;
    return 0;
}
