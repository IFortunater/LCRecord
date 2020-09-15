/*
    删除连标节点
    执行用时：12 ms, 在所有 C++ 提交中击败了77.71%的用户
    内存消耗：8.7 MB, 在所有 C++ 提交中击败了23.73%的用户
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
    ListNode(int x) : val(x), next(NULL){}
};

class Solution
{
public:
    ListNode *deleteNode(ListNode *head, int val)
    {
        ListNode *p = head;
        ListNode *q = nullptr;
        while (p != nullptr){
            if ( p->val == val){
                if (p == head)
                    head = head->next;
                else{
                    q->next = p->next;
                    break;
                }
            }
            q = p;
            p = p->next;
        }
        return head;
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    return 0;
}