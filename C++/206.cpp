/*
    反转链表
    执行用时：4 ms, 在所有 C++ 提交中击败了99.83%的用户
    内存消耗：8.4 MB, 在所有 C++ 提交中击败了67.83%的用户
*/
#include<iostream>
#include<vector>
using namespace std;

typedef struct ListNode
{
    int val;
    ListNode *next;
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

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode* p = NULL, *q = NULL;
        while (head != NULL){
            q = head;
            head = head->next;
            if (p != NULL)
                q->next = p;
            else
                q->next = NULL;
            p = q;
        }
        return p;
    }
};



int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4, 5};
    ListNode *head = NULL;
    for (int &num : nums){
        ListNode *p = new ListNode;
        p->val = num;
        p->next = NULL;
        if (head != NULL){
            p->next = head;
        }
        head = p;
    }
    showChain(head);
    Solution s = Solution();
    head = s.reverseList(head);
    showChain(head);
    return 0;
}
