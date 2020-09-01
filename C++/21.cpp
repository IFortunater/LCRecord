/*
    合并两个有序链表
    执行用时：8 ms, 在所有 C++ 提交中击败了84.84%的用户
    内存消耗：14.3 MB, 在所有 C++ 提交中击败了61.01%的用户
*/

#include<iostream>
#include<vector>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode * next;
}ListNode;

void showChain(ListNode *head){
    ListNode *p = head;
    while (p != NULL){
        cout << p->val << " ";
        p = p->next;
    }
    cout << endl;
}

ListNode* CreateChain(vector<int> arr){
    ListNode *head = NULL;
    for (int & num : arr){
        ListNode* p = new ListNode;
        p->val = num;
        p->next = NULL;
        if (head != NULL){
            p->next = head;
        }
        head = p;
    }
    return head;
}

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l2 == NULL)
            return l1;
        if (l1 == NULL)
            return l2;
        ListNode *prep = NULL, *p = l1;
        ListNode *q = l2;
        while (p != NULL && q != NULL)
        {
            if (p->val > q->val)
            {
                if (prep == NULL)
                {
                    l1 = q;
                    prep = q;
                }
                else
                {
                    prep->next = q;
                }
                prep = q;
                q = q->next;
                prep->next = p;
            }
            else
            {
                prep = p;
                p = p->next;
            }
        }
        if (p == NULL)
        {
            prep->next = q;
        }
        return l1;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr1 = {5, 4, 4, 3, 1};
    vector<int> arr2 = {6, 5, 2, 1};
    ListNode *p1 = CreateChain(arr1);
    ListNode *p2 = CreateChain(arr2);
    showChain(p1);
    showChain(p2);
    Solution s = Solution();
    showChain(s.mergeTwoLists(p1, p2));
    return 0;
}
