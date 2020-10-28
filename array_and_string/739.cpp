
// 作者：mxbbylin
// 创建时间：2020-10-21 12:15
// 最后修改时间：2020-10-21 12:15
// 文件名：739.cpp
// 说明：
// 题目：
// 请根据每日 气温 列表，重新生成一个列表。对应位置的输出为：要想观测到更高的气温，至少需要等待的天数。如果气温在这之后都不会升高，请在该位置用 0 来代替。

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> stk;
        vector<int> out(T.size());
        for(int i=0;i<T.size();i++){
            if(stk.empty()) stk.push(i);
            else{
                int temp=stk.top();
                while(T[temp]<T[i]){
                    out[temp]=i-temp;
                    stk.pop();
                    if(stk.empty()){
                        break;
                    }
                    temp=stk.top();
                }
                stk.push(i);
            }
        }
        while(!stk.empty()){
            int temp=stk.top();
            stk.pop();
            out[temp]=0;
        }
        return out;
    }
};
 
