/*
    删除链表的倒数第N个节点
    执行用时：8 ms, 在所有 C++ 提交中击败了52.76%的用户
    内存消耗：6.6 MB, 在所有 C++ 提交中击败了42.67%的用户
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int k)
    {
        ListNode *p = head;
        int n = 0, pos;
        while (p != nullptr){
            n++;
            p = p->next;
        }
        if (n == k)
            head = head->next;
        else{
            pos = n - k;
            n = 1;
            p = head;
            while (p != nullptr && n != pos){
                n++;
                p = p->next;
            }
            p->next = p->next->next;
        }
        return head;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    return 0;
}