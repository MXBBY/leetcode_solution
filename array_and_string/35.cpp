
// 作者：mxbbylin
// 创建时间：2020-10-28 15:59
// 最后修改时间：2020-10-28 15:59
// 文件名：35.cpp
// 说明：
// 题目：
// 给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置。

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(nums.size()==0) return 0;
        int i;
        for(i=0;i<nums.size();i++){
            if(target==nums[i]) return i;
            else if(target<nums[i]) break;
        }
        if(i==0) return 0;
        return i;

    }
}; 
 
