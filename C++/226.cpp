/*
    翻转二叉树
    执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
    内存消耗：9 MB, 在所有 C++ 提交中击败了73.04%的用户
*/

#include <iostream>
#include <string>
#include <vector>
#include <map>
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
    TreeNode *temp;
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root != nullptr)
            reverseTree(root);
        return root;
    }

    void reverseTree(TreeNode *root)
    {
        if (root->left != nullptr || root->right != nullptr)
        {
            temp = root->left;
            root->left = root->right;
            root->right = temp;
        }
        if (root->left != nullptr)
        {
            invertTree(root->left);
        }
        if (root->right != nullptr)
        {
            invertTree(root->right);
        }
    }
};

int main(int argc, char const *argv[])
{
    Solution s = Solution();
    return 0;
}