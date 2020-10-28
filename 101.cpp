
// 作者：mxbbylin
// 创建时间：2020-10-28 16:39
// 最后修改时间：2020-10-28 16:39
// 文件名：101.cpp
// 说明：
// 题目：
// 给定一个二叉树，检查它是否是镜像对称的。

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
    bool check(TreeNode* p,TreeNode* q){
        if(!p && !q) return true;
        if(!p || !q) return false;
        return p->val==q->val && check(p->left,q->right) && check(p->right,q->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==nullptr) return true;
        return check(root,root);
    }
};
 
