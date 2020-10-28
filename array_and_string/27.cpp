
// 作者：mxbbylin
// 创建时间：2020-10-28 16:16
// 最后修改时间：2020-10-28 16:16
// 文件名：27.cpp
// 说明：
// 题目：
// 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int oldlength=nums.size();
        int low=0;
        int fast;
        for(fast=0;fast<oldlength;fast++){
            if(nums[fast]!=val){
                if(low!=fast) nums[low]=nums[fast];
                low++;
            }
        }
        return low;
    }
};
 
