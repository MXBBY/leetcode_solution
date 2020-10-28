
// 作者：mxbbylin
// 创建时间：2020-10-28 16:26
// 最后修改时间：2020-10-28 16:26
// 文件名：118.cpp
// 说明：
// 题目：
// 给定一个非负整数 numRows，生成杨辉三角的前 numRows 行。

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> out(numRows);
        for(int i=0;i<numRows;i++){
            out[i]=vector<int>(i+1,1);
        }
        for(int i=0;i<numRows;i++){
            for(int j=1;j<i;j++){
                out[i][j]=out[i-1][j-1]+out[i-1][j];
            }
        }
        return out;
    }
};
 
