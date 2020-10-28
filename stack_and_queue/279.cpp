
// 作者：mxbbylin
// 创建时间：2020-10-21 11:29
// 最后修改时间：2020-10-21 11:29
// 文件名：279.cpp
// 说明： 
// 题目：
// 给定正整数 n，找到若干个完全平方数（比如 1, 4, 9, 16, ...）使得它们的和等于 n。你需要让组成和的完全平方数的个数最少

class Solution {
public:
    int numSquares(int n) {
        int step=0;
        int min=floor(sqrt(n));
        queue<int> Queue;
        Queue.push(0);
        while(!Queue.empty()){
            step++;
            int size=Queue.size();
            for(int i=1;i<=size;i++){
                int front=Queue.front();
                Queue.pop();
                for(int j=1;j<=min;j++){
                    int sum=front+pow(j,2);
                    if(sum==n) return step;
                    if(sum>n) continue;
                    Queue.push(sum);
                }
            }
        }
        return -1;
    }
};
