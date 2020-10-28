
// 作者：mxbbylin
// 创建时间：2020-10-28 16:40
// 最后修改时间：2020-10-28 16:40
// 文件名：112.cpp
// 说明： 
// 题目：
// 给定一个二叉树和一个目标和，判断该树中是否存在根节点到叶子节点的路径，这条路径上所有节点值相加等于目标和。

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==nullptr) return false;
        if(root->left==nullptr && root->right==nullptr) return sum==root->val;
        return hasPathSum(root->right,sum-root->val) || hasPathSum(root->left,sum-root->val);
    }
};
