
// 作者：mxbbylin
// 创建时间：2020-10-28 16:00
// 最后修改时间：2020-10-28 16:00
// 文件名：56.cpp
// 说明：
// 题目：
// 给出一个区间的集合，请合并所有重叠的区间。

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return {};
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> merged;
        for(int i=0;i<intervals.size();i++){
            int l=intervals[i][0];
            int r=intervals[i][1];
            if(!merged.size() || merged.back()[1]<l){
                merged.push_back({l,r});
            }
            else{
                merged.back()[1]=max(merged.back()[1],r);
            }
        }
        return merged;
    }
}; 
 
