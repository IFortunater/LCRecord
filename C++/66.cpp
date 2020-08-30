#include<iostream>
#include<vector>
#include<ctime>
#include<Windows.h>
#include<algorithm>
#include<sys\timeb.h>
using namespace std;

// class Solution
// {
// public:
//     vector<int> plusOne(vector<int> &digits)
//     {
//         int num = 0;
//         for (const int & n : digits){
//             num = num * 10 + n;
//         }
//         num++;
//         digits.clear();
//         DWORD start = GetTickCount();
//         while (num > 0){
//             digits.insert(digits.begin(), num%10);
//             // digits.push_back(num%10);
//             num /= 10;
//         }
//         // reverse(digits.begin(), digits.end());
//         DWORD end = GetTickCount();
//         cout << "start:" << start << endl;
//         cout << "end:" << end << endl; 
//         cout << "timeComsuming:" << end - start << endl; 
//         return digits;
//     }
// };

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        for (int i = digits.size()-1; i >=0 ; i--){
            digits[i] = digits[i] + carry;
            carry = digits[i] / 10;
            digits[i] = digits[i] - carry*10;
        }
        if (carry != 0)
            digits.insert(digits.begin(), carry);
        return digits;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<int> nums = {1, 2, 9};
    for (const int & n : s.plusOne(nums)){
        cout << n << " ";
    }
    cout << endl;
    return 0;
}
