
// 作者：mxbbylin
// 创建时间：2020-10-28 16:33
// 最后修改时间：2020-10-28 16:33
// 文件名：94.cpp
// 说明： 
// 题目：
// 给定一个二叉树，返回它的中序 遍历。

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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> out;
        if(root==nullptr) return out;
        stack<TreeNode*> stk;
        TreeNode* temp=root;
        while(temp || !stk.empty()){
            while(temp){
                stk.push(temp);
                temp=temp->left;
            }
            temp=stk.top();
            stk.pop();
            out.push_back(temp->val);
            temp=temp->right;
        }
        return out;
    }
};
