
// 作者：mxbbylin
// 创建时间：2020-10-28 15:55
// 最后修改时间：2020-10-28 15:55
// 文件名：841.cpp
// 说明： 
// 题目：
// 有 N 个房间，开始时你位于 0 号房间。每个房间有不同的号码：0，1，2，...，N-1，并且房间里可能有一些钥匙能使你进入下一个房间。

class Solution {
public:
    int num;
    vector<int> vis;
    void dfs(vector<vector<int>>& rooms, int x){
        vis[x]=true;
        num++;
        for(auto& it:rooms[x]){
            if(!vis[it]){
                dfs(rooms,it);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        num=0;
        vis.resize(n);
        dfs(rooms,0);
        return num==n;
    }
};
 
