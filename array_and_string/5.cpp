
// 作者：mxbbylin
// 创建时间：2020-10-28 16:05
// 最后修改时间：2020-10-28 16:05
// 文件名：5.cpp
// 说明：
// 题目：
// 给定一个字符串 s，找到 s 中最长的回文子串。你可以假设 s 的最大长度为 1000。

class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        vector<vector<int>> dp(n,vector<int>(n));
        string ans;
        for(int l=0;l<n;l++){
            for(int i=0;i+l<n;i++){
                int j=i+l;
                if(l==0) dp[i][j]=1;
                else if(l==1) dp[i][j]=(s[i]==s[j]);
                else dp[i][j]=(s[i]==s[j] && dp[i+1][j-1]);
                if(dp[i][j] && l+1>ans.size()) ans=s.substr(i,l+1);
            }
        }
        return ans;
    }
};
 
