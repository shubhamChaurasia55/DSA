class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());

        vector<vector<int>> ans;
    
        for(int i=0;i<intervals.size()-1;i++){
            if(intervals[i][1]<intervals[i+1][0]) ans.push_back(intervals[i]);
            else{
                intervals[i+1][0] = intervals[i][0];
                if(intervals[i][1]>intervals[i+1][1])
                    intervals[i+1][1] = intervals[i][1];
            
            }
        }
        ans.push_back(intervals[intervals.size()-1]);
        return ans;
    }
};