
// 作者：mxbbylin
// 创建时间：2020-10-28 16:37
// 最后修改时间：2020-10-28 16:37
// 文件名：102.cpp
// 说明：
// 题目：
// 给你一个二叉树，请你返回其按 层序遍历 得到的节点值。 （即逐层地，从左到右访问所有节点）。

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>> out;
        queue<TreeNode*> que;
        que.push(root);

        while(!que.empty()){
            int size=que.size();
             vector<int> samelayer;
            for(int i=0;i<size;i++){
                TreeNode* temp=que.front();
                que.pop();
                samelayer.push_back(temp->val);
                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
            out.push_back(samelayer);
        }
        return out;
    }
};



 
