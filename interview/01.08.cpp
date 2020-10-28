
// 作者：mxbbylin
// 创建时间：2020-10-28 16:02
// 最后修改时间：2020-10-28 16:02
// 文件名：01.08.cpp
// 说明：
// 题目：
// 编写一种算法，若M × N矩阵中某个元素为0，则将其所在的行与列清零。

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int row0=0, cow0=0;
        for(int i=0;i<n;i++){
            if(matrix[i][0]==0) row0=1;
        }
        for(int j=0;j<m;j++){
            if(matrix[0][j]==0) cow0=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(matrix[0][j]==0 || matrix[i][0]==0){
                    matrix[i][j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(row0) matrix[i][0]=0;
        }
        for(int j=0;j<m;j++){
            if(cow0) matrix[0][j]=0;
        }
    }
}; 
 
