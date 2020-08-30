#include<iostream>
#include<string>
#include<vector>
using namespace std;

// 此题原本因该以KMP算法来做，但是因为比较菜，所以直接无脑调函数

class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};

int main(){
    Solution s = Solution();
    string strP = "aaaaa";
    string strS = "";
    int index = s.strStr(strP, strS);
    cout << index << endl;
}