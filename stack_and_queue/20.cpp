
// 作者：mxbbylin
// 创建时间：2020-10-21 12:13
// 最后修改时间：2020-10-21 12:13
// 文件名：20.cpp
// 说明：
// 题目：
// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

class Solution {
public:
    bool isValid(string s) {
       int n=s.size();
       if(n%2==1) return false;
       unordered_map<char,char> pairs={
           {')','('},
           {']','['},
           {'}','{'}
       };
       stack<char> stk;
       for(char ch:s){
           if(pairs.count(ch)){
               if(stk.empty() || stk.top()!=pairs[ch]){
                   return false;
               }
               stk.pop();
           }
           else stk.push(ch);
       }
       return stk.empty(); 
    }
}; 
 
