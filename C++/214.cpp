#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     string shortestPalindrome(string s)
//     {
//         if (s.length() == 0)
//             return "";
//         int index = 0;
//         for (int i = 1; i <= s.length() / 2; i++)
//         {
//             int oddpre = i - 1, evenpre = i, beh = i + 1;
//             while (oddpre >= 0 && evenpre >= 0)
//             {
//                 if (s[oddpre] != s[beh] && s[evenpre] != s[beh] || beh == 0){
//                     index = 0;
//                     break;
//                 }
//                 if (oddpre == 0 || evenpre == 0)
//                 {
//                     if (beh > index)
//                         index = beh;
//                 }
//                 if (s[oddpre] == s[beh])
//                     oddpre--;
//                 if (s[evenpre] == s[beh])
//                     evenpre--;
//                 beh++;
//             }
//         }
//         string str = s.substr(index + 1, s.length() - 1);
//         reverse(str.begin(), str.end());
//         s = str + s;
//         return s;
//     }
// };

// class Solution
// {
// public:
//     string shortestPalindrome(string s)
//     {
//         if (s.length() == 0)
//             return "";
//         int index;
//         string ans = "";
//         for (int i = 0; i < s.length()/2; i++){
//             int pre = i, beh = i+1;
//             while (pre >= 0){
//                 if (s[pre] != s[beh]){
//                     break;
//                 }
//                 if (pre == 0){
//                     if (beh > index)
//                         index = beh;
//                 }
//                 pre--;
//                 beh++;
//             }
//         }
//         for (int i = 1; i <= s.length() / 2; i++)
//         {
//             int pre = i - 1, beh = i + 1;
//             while (pre >= 0)
//             {
//                 if (s[pre] != s[beh])
//                 {
//                     break;
//                 }
//                 if (pre == 0)
//                 {
//                     if (beh > index)
//                         index = beh;
//                 }
//                 pre--;
//                 beh++;
//             }
//         }
//         string str = s.substr(index+1, s.length()-1);
//         reverse(str.begin(), str.end());
//         s = str + s;
//         return s;
//     }
// };

class Solution
{
public:
    string shortestPalindrome(string s)
    {
        if (s.length() == 0)
            return "";
        string str = "";
        int i = 0;
        while (!isPalindrome(str + s)){
            str = s.substr(s.length()-1-i, s.length()-1);
            reverse(str.begin(), str.end());
            i++;
        }
        return str + s;
    }

    bool isPalindrome (string s){
        int ahead = s.length() / 2 - 1;
        int behind = s.length()%2==1 ? s.length()/2 + 1 : s.length()/2;
        while (ahead >= 0){
            if (s[ahead] != s[behind])
                return false;
            ahead--;
            behind++;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    string str = "abcd";
    Solution s = Solution();
    cout << s.shortestPalindrome(str) << endl;
    return 0;
}
