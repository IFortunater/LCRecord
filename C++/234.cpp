/*
    回纹链表
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        ListNode *p = head;
        int len = 0;
        vector<int> nums;
        while ( p != nullptr){
            len++;
            nums.push_back(p->val);
            p = p->next;
        }
        int i = 0, j = len - 1;
        while (i < j){
            if (nums[i] != nums[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    return 0;
}