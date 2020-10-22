
// 作者：mxbbylin
// 创建时间：2020-10-21 12:19
// 最后修改时间：2020-10-21 12:19
// 文件名：150.cpp
// 说明： 
// 题目：
// 根据 逆波兰表示法，求表达式的值。
//有效的运算符包括 +, -, *, / 。每个运算对象可以是整数，也可以是另一个逆波兰表达式。


class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;
        stringstream ss;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int num1=stk.top();
                stk.pop();
                int num2=stk.top();
                stk.pop();
                if(tokens[i]=="+") stk.push(num1+num2);
                else if(tokens[i]=="-") stk.push(num2-num1);
                else if(tokens[i]=="*") stk.push(num1*num2);
                else stk.push(num2/num1);
            }
            else{
                int temp;
                ss.clear();
                ss<<tokens[i];
                ss>>temp;
                stk.push(temp);
            }
        }
        return stk.top();

    }
};
