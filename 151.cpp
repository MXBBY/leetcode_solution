
// 作者：mxbbylin
// 创建时间：2020-10-28 16:11
// 最后修改时间：2020-10-28 16:11
// 文件名：151.cpp
// 说明：
// 题目：
// 给定一个字符串，逐个翻转字符串中的每个单词。

class Solution {
public:
    string reverseWords(string s) {
        stack<string> stk;
        int n=s.size();
        int head=0;
        string out="";
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                int num=i-head;
                string temp=s.substr(head,num);
                if(num>0) stk.push(temp);
                while(s[i]==' ' && i<n) i++;
                head=i;
                i--;
            }
            else if(i==n-1){
                string temp=s.substr(head,n-head);
                stk.push(temp);
            }
        }

        while(!stk.empty()){
            string temp=stk.top();
            stk.pop();
            out+=temp;
            if(!stk.empty()) out+=' ';
        }
        return out;
    }
};
 
