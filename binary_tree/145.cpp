
// 作者：mxbbylin
// 创建时间：2020-10-28 16:36
// 最后修改时间：2020-10-28 16:36
// 文件名：145.cpp
// 说明：
// 题目：
// 给定一个二叉树，返回它的 后序 遍历。

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void loop(TreeNode* root,vector<int>& out){
        if(root->left!=nullptr) loop(root->left,out);
        if(root->right!=nullptr) loop(root->right,out);
        out.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> out;
        if(root==nullptr) return {};
        loop(root,out);
        return out;
    }
}; 
 
