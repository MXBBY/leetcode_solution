
// 作者：mxbbylin
// 创建时间：2020-10-21 12:24
// 最后修改时间：2020-10-21 12:24
// 文件名：494.cpp
// 说明：
// 题目：
// 给定一个非负整数数组，a1, a2, ..., an, 和一个目标数，S。现在你有两个符号 + 和 -。对于数组中的任意一个整数，你都可以从 + 或 -中选择一个符号添加在前面。

class Solution {
public:
    int dfs(vector<int>& nums,uint target,int left){
        if(target==0 && left==nums.size()) return 1;
        if(left>=nums.size()) return 0;
        int ans=0;
        ans+=dfs(nums,target-nums[left],left+1);
        ans+=dfs(nums,target+nums[left],left+1);
        return ans;
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        return dfs(nums,S,0);
    }
};
