
// 作者：mxbbylin
// 创建时间：2020-10-28 16:30
// 最后修改时间：2020-10-28 16:30
// 文件名：153.cpp
// 说明：
// 题目：
// 假设按照升序排序的数组在预先未知的某个点上进行了旋转。

class Solution {
public:
    int findMin(vector<int>& nums) {
        int min=INT_MAX;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<min) min=nums[i];
        }
        return min;
    }
};
 
