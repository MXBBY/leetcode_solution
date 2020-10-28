
// 作者：mxbbylin
// 创建时间：2020-10-28 16:17
// 最后修改时间：2020-10-28 16:17
// 文件名：485.cpp
// 说明：
// 题目：
// 定一个二进制数组， 计算其中最大连续1的个数。

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==1) return 1;
       int count=0;
       int max=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=0) count++;
           else count=0;
           if(count>max) max=count;
       }
       return max;
    }
};
 
