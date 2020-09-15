/*
    二叉树的中序遍历
    执行用时：4 ms, 在所有 C++ 提交中击败了46.01%的用户
    内存消耗：8.2 MB, 在所有 C++ 提交中击败了9.32%的用户
*/

#include<iostream>
#include<vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
};

class Solution
{
private:
    vector<int> ans;
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        if (root == nullptr)
            return ans;
        if (root->left != nullptr){
            inorderTraversal(root->left);
        }
        ans.push_back(root->val);
        if (root->right != nullptr){
            inorderTraversal(root->right);
        }
        return ans;
    }
};

