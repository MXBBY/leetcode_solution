
// 作者：mxbbylin
// 创建时间：2020-10-21 12:21
// 最后修改时间：2020-10-21 12:21
// 文件名：200.cpp
// 说明：
// 题目：
// 给你一个由 '1'（陆地）和 '0'（水）组成的的二维网格，请你计算网格中岛屿的数量。


class Solution {
public:
    void dfs(vector<vector<char>>& grid,int r,int c){
        int nr=grid.size();
        int nc=grid[0].size();

        grid[r][c]='0';
        if(r-1>=0 && grid[r-1][c]=='1') dfs(grid,r-1,c);
        if(r+1<nr && grid[r+1][c]=='1') dfs(grid,r+1,c);
        if(c-1>=0 && grid[r][c-1]=='1') dfs(grid,r,c-1);
        if(c+1<nc && grid[r][c+1]=='1') dfs(grid,r,c+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int nr=grid.size();
        if(nr==0) return 0;
        int nc=grid[0].size();
        int num=0;
        for(int i=0;i<nr;i++){
            for(int j=0;j<nc;j++){
                if(grid[i][j]=='1'){
                    num++;
                    dfs(grid,i,j);
                }
            }
        }
        return num;
    }
};
