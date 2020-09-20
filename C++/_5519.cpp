/*
    重新排列单词间的空格
*/

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string reorderSpaces(string text) {
        int word_count = 0, blank_count = 0;
        int i = 0;
        while (i < text.length())
        {
            if(text[i] == ' '){
                blank_count++;
                i++;
            }else{
                word_count++;
                while (text[i] != ' '){
                    i++;
                }
            }
        }
        cout << "单词：" << word_count << endl;
        cout << "空格：" << blank_count << endl;
        int end_num = blank_count % (word_count-1);
        int blank = blank_count / (word_count-1);
        
        return "";
    }
};

int main(int argc, char const *argv[])
{
    string str = "  this   is  a sentence ";
    Solution s = Solution();
    s.reorderSpaces(str);
    return 0;
}
