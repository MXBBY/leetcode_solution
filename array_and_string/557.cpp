
// 作者：mxbbylin
// 创建时间：2020-10-28 16:28
// 最后修改时间：2020-10-28 16:28
// 文件名：557.cpp
// 说明：
// 题目：
// 给定一个字符串，你需要反转字符串中每个单词的字符顺序，同时仍保留空格和单词的初始顺序。

class Solution {
public:

    string reverseWords(string s) {
        int slow=0;
        int fast=0;
        for(;fast<s.size();fast++){
            if(s[fast]==' ' || fast==s.size()-1){
                int temp=fast+1;
                if(fast!=s.size()-1) fast=fast-1;
                while(slow<fast){
                    int tf=s[slow];
                    s[slow]=s[fast];
                    s[fast]=tf;
                    slow++;
                    fast--;
                }
                slow=temp;
                fast=temp-1;
            }
        }
        return s;
    }
}; 
 
