
// 作者：mxbbylin
// 创建时间：2020-10-21 12:23
// 最后修改时间：2020-10-21 12:23
// 文件名：133.cpp
// 说明：
// 题目：
// 给你无向 连通 图中一个节点的引用，请你返回该图的 深拷贝（克隆）。

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }

    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<Node*,Node*> visited;
    Node* cloneGraph(Node* node) {
        if(node==nullptr) return node;
        if(visited.find(node)!=visited.end()) return visited[node];
        Node* cloneNode=new Node(node->val);
        visited[node]=cloneNode;
        for(auto& neighbor:node->neighbors)
            cloneNode->neighbors.emplace_back(cloneGraph(neighbor));
        return cloneNode;
    }
};
 
