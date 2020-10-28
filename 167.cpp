
// 作者：mxbbylin
// 创建时间：2020-10-28 16:15
// 最后修改时间：2020-10-28 16:15
// 文件名：167.cpp
// 说明：
// 题目：
// 给定一个已按照升序排列 的有序数组，找到两个数使得它们相加之和等于目标数。函数应该返回这两个下标值 index1 和 index2，其中 index1 必须小于 index2。

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0;
        int right=numbers.size()-1;
        vector<int> index;
        while(1){
            if(left>right) break;
            if(numbers[left]+numbers[right]==target){
                index.push_back(left+1);
                index.push_back(right+1);
                return index;
            }
            else if(numbers[left]+numbers[right]<target) left++;
            else right--;
        }
        return index;
    }
};

