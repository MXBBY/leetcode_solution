
// 作者：mxbbylin
// 创建时间：2020-10-28 15:38
// 最后修改时间：2020-10-28 15:38
// 文件名：542.cpp
// 说明：
// 题目：
// 给定一个由 0 和 1 组成的矩阵，找出每个元素到最近的 0 的距离。两个相邻元素间的距离为 1 。 
 
class Solution {
private:
    static constexpr int dirs[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        queue<pair<int,int>> que;
        int nr=matrix.size();
        int nc=matrix[0].size();
        vector<vector<int>> dist(nr,vector<int>(nc));
        vector<vector<int>> seen(nr,vector<int>(nc));
        for(int x=0;x<nr;x++){
            for(int y=0;y<nc;y++){
                if(matrix[x][y]==0){
                    que.emplace(x,y);
                    seen[x][y]=1;
                }
            }
        }
        while(!que.empty()){
            auto[i,j]=que.front();
            que.pop();
            for(int d=0;d<4;++d){
                int ni=i+dirs[d][0];
                int nj=j+dirs[d][1];
                if(ni>=0 && ni<nr && nj>=0 && nj<nc && !seen[ni][nj]){
                    dist[ni][nj]=dist[i][j]+1;
                    que.emplace(ni,nj);
                    seen[ni][nj]=1;
                }
            }
        }
        return dist;
    }
};
