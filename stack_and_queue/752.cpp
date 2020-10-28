
// 作者：mxbbylin
// 创建时间：2020-10-21 11:25
// 最后修改时间：2020-10-21 11:25
// 文件名：752.cpp
// 说明： 
// 题目：
// 你有一个带有四个圆形拨轮的转盘锁。每个拨轮都有10个数字： '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' 。每个拨轮可以自由旋转：例如把 '9' 变为  '0'，'0' 变为 '9' 。每次旋转都只能旋转一个拨轮的一位数字。
//锁的初始数字为 '0000' ，一个代表四个拨轮的数字的字符串。
//列表 deadends 包含了一组死亡数字，一旦拨轮的数字和列表里的任何一个元素相同，这个锁将会被永久锁定，无法再被旋转。
//字符串 target 代表可以解锁的数字，你需要给出最小的旋转次数，如果无论如何不能解锁，返回 -1。

class Solution {
public:
    string plusOne(string temp,int j){
        if(temp[j]=='9') temp[j]='0';
        else temp[j]+=1;
        return temp;
    }
    string minusOne(string temp,int j){
        if(temp[j]=='0') temp[j]='9';
        else temp[j]-=1;
        return temp;
    }
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> deadEnds;
        for(auto& dead:deadends) deadEnds.insert(dead);
        int step=0;
        unordered_set<string> visited;
        queue<string> res;
        res.push("0000");
        while(!res.empty()){
            int size=res.size();
            for(int i=0;i<size;i++){
                string temp=res.front();
                res.pop();
                if(deadEnds.count(temp)) continue;
                if(temp==target) return step;
                for(int j=0;j<4;j++){
                    string up=plusOne(temp,j);
                    string down=minusOne(temp,j);
                    if(!visited.count(up)){
                        res.push(up);
                        visited.insert(up);
                    }
                    if(!visited.count(down)){
                        res.push(down);
                        visited.insert(down);
                    }
                }
            }
            ++step;
        }
        return -1;
    }
};
