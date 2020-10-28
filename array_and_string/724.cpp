
// 作者：mxbbylin
// 创建时间：2020-10-28 15:58
// 最后修改时间：2020-10-28 15:58
// 文件名：724.cpp
// 说明： 
// 题目：
// 给定一个整数类型的数组 nums，请编写一个能够返回数组 “中心索引” 的方法。

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left_sum=0;
        int sum=0;
        for(int n: nums) sum+=n;
        for(int i=0;i<nums.size();i++){
            if(left_sum*2==sum-nums[i]) return i;
            left_sum+=nums[i];
        }
        return -1;
    }
};
 
