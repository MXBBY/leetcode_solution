
// 作者：mxbbylin
// 创建时间：2020-10-28 16:03
// 最后修改时间：2020-10-28 16:03
// 文件名：498.cpp
// 说明： 
// 题目：
// 给定一个含有 M x N 个元素的矩阵（M 行，N 列），请以对角线遍历的顺序返回这个矩阵中的所有元素，对角线遍历如下图所示。

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> nums;
        int m=matrix.size();
        if(m==0) return nums;
        int n=matrix[0].size();
        if(n==0) return nums;

        bool flag=true;
        for(int i=0;i<m+n;i++){
            int pm=flag? m:n;
            int pn=flag? n:m;
            int x=(i<pm)? i:pm-1;
            int y=i-x;
            while(x>=0 && y<pn){
                nums.push_back(flag ? matrix[x][y]:matrix[y][x]);
                x--;
                y++;
            }
            flag=!flag;
        }
        return nums;
    }
};
 
