
// 作者：mxbbylin
// 创建时间：2020-10-28 16:18
// 最后修改时间：2020-10-28 16:18
// 文件名：209.cpp
// 说明：
// 题目：
// 给定一个含有 n 个正整数的数组和一个正整数 s ，找出该数组中满足其和 ≥ s 的长度最小的 连续 子数组，并返回其长度。如果不存在符合条件的子数组，返回 0。

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        int ans=INT_MAX;
        vector<int> sums(n+1,0);
        for(int i=1;i<=n;i++) sums[i]=sums[i-1]+nums[i-1];
        for(int i=1;i<=n;i++){
            int target=s+sums[i-1];
            auto bound=lower_bound(sums.begin(),sums.end(),target);
            if(bound!=sums.end()){
                ans=min(ans,static_cast<int>((bound-sums.begin())-(i-1)));
            }
        } 
        return ans==INT_MAX ? 0:ans;
    }
}; 
