
// 作者：mxbbylin
// 创建时间：2020-10-28 16:31
// 最后修改时间：2020-10-28 16:31
// 文件名：26.cpp
// 说明：
// 题目：
// 给定一个排序数组，你需要在 原地 删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int oldlength=nums.size();
        if(oldlength==0 || oldlength==1) return oldlength;
        int slow=0;
        int fast=0;
        for(;fast<oldlength;fast++){
            if(nums[slow]!=nums[fast]){
                slow++;
                nums[slow]=nums[fast];
            }
        }
        return slow+1;
    }
};
 
