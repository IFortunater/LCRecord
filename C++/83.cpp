/*
    删除排序链表中的重复元素
    执行用时：12 ms, 在所有 C++ 提交中击败了95.44%的用户
    内存消耗：7.7 MB, 在所有 C++ 提交中击败了16.82%的用户
*/

#include <iostream>
#include <vector>
using namespace std;

typedef struct ListNode
{
    int val;
    struct ListNode *next;
} ListNode;

void showChain(ListNode *head)
{
    ListNode *p = head;
    while (p != NULL)
    {
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

ListNode *CreateChain(vector<int> arr)
{
    ListNode *head = NULL;
    for (int &num : arr)
    {
        ListNode *p = new ListNode;
        p->val = num;
        p->next = NULL;
        if (head != NULL)
        {
            p->next = head;
        }
        head = p;
    }
    return head;
}

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *p = head, *q = head->next;
        while (q != NULL)
        {
            if (p->val == q->val)
            {
                q = q->next;
            }
            else
            {
                p->next = q;
                p = q;
                q = q->next;
            }
        }
        p->next = q;
        return head;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr1 = {1, 1, 1};
    ListNode *p1 = CreateChain(arr1);
    showChain(p1);
    Solution s = Solution();
    showChain(s.deleteDuplicates(p1));
    return 0;
}
