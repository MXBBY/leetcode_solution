
// 作者：mxbbylin
// 创建时间：2020-10-28 16:38
// 最后修改时间：2020-10-28 16:38
// 文件名：104.cpp
// 说明：
// 题目：
// 给定一个二叉树，找出其最大深度。

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
    int maxDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        if(root->left==nullptr && root->right==nullptr) return 1;  
        return max(maxDepth(root->left),maxDepth(root->right))+1;  
    }
}; 
 
