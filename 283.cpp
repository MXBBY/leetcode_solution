
// 作者：mxbbylin
// 创建时间：2020-10-28 16:32
// 最后修改时间：2020-10-28 16:32
// 文件名：283.cpp
// 说明：
// 题目：
// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int n=nums.size();
       int slow=0;
       int fast=0;
       for(;fast<n;fast++){
           if(nums[fast]!=0){
               nums[slow]=nums[fast];
               slow++;
           }
        }
        for(;slow<n;slow++) nums[slow]=0;
    }
};
 
