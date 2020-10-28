
// 作者：mxbbylin
// 创建时间：2020-10-28 16:13
// 最后修改时间：2020-10-28 16:13
// 文件名：344.cpp
// 说明：
// 题目：
// 编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。

//不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

//你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n;i++){
            int j=n-1-i;
            if(i>j) break;
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
};
