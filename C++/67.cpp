#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string res = "";
        string *min = a.length()>b.length()?&b: &a;
        int size = labs(a.length() - b.length());
        for (int i = 0; i < size; i++)
            (*min) = '0' + (*min);
        int S, A, B, C=0;
        for (int i = a.size()-1; i >= 0; i--){
            A = a[i]-48;
            B = b[i]-48;
            S = A^B^C;
            C = C&(A^B)|(A&B);
            res = char(S+48) + res;
        }
        if (C != 0)
            res = "1" + res;
        return res;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    string op1 = "1";
    string op2 = "111";
    cout << s.addBinary(op1, op2) << endl;
    return 0;
}
