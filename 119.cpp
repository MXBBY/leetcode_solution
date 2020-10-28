
// 作者：mxbbylin
// 创建时间：2020-10-28 16:27
// 最后修改时间：2020-10-28 16:27
// 文件名：119.cpp
// 说明：
// 题目：
// 给定一个非负索引 k，其中 k ≤ 33，返回杨辉三角的第 k 行。

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int k=rowIndex;
        vector<int> out(k+1,0);
        vector<int> temp(k+1,0);
        out[0]=1;
        temp[0]=1;
        if(k==0) return out;
        out[1]=1;
        temp[1]=1;
        if(k==1) return out;
        for(int i=3;i<=k+1;i++){
            for(int j=1;j<i-1;j++) out[j]=temp[j-1]+temp[j];
            out[i-1]=1;
            temp=out;
        }
        return out;
    }
};
 
