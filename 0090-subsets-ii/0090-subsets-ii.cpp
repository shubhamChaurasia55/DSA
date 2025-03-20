class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>ds;
        solve(nums,0,nums.size(),ds,ans);
        return ans;
    }
    void solve(vector<int>&nums,int i,int n,vector<int>&ds,vector<vector<int>>&ans){
        ans.push_back(ds);
        if(i==n){
            return;
        }

        for(int j=i;j<n;j++){
            if(j>i&&nums[j]==nums[j-1])continue;
            ds.push_back(nums[j]);
            solve(nums,j+1,n,ds,ans);
            ds.pop_back();
        }
    }
};