
// 作者：mxbbylin
// 创建时间：2020-10-28 15:37
// 最后修改时间：2020-10-28 15:37
// 文件名：733.cpp
// 说明： 
// 题目：
// 有一幅以二维整数数组表示的图画，每一个整数表示该图画的像素值大小，数值在 0 到 65535 之间。

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int oldColor=image[sr][sc];
        if(oldColor==newColor) return image;
        queue<pair<int,int>> que;
        que.emplace(sr,sc);
        image[sr][sc]=newColor;
        while(!que.empty()){
            int x=que.front().first;
            int y=que.front().second;
            que.pop();
            if(x+1<image.size() && image[x+1][y]==oldColor){
                image[x+1][y]=newColor;
                que.emplace(x+1,y);
            }
            if(x-1>=0 && image[x-1][y]==oldColor){
                image[x-1][y]=newColor;
                que.emplace(x-1,y);
            }
            if(y+1<image[0].size() && image[x][y+1]==oldColor){
                image[x][y+1]=newColor;
                que.emplace(x,y+1);
            }
            if(y-1>=0 && image[x][y-1]==oldColor){
                image[x][y-1]=newColor;
                que.emplace(x,y-1);
            }
        }
        return image;
    }
};
 
