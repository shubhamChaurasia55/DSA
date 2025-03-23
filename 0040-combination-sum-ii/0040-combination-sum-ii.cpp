class Solution {
public:
    void solve(vector<int>& c, int t, vector<int> &temp, int idx, vector<vector<int>> &ans){
        if(t == 0){
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<c.size();i++){
            if(i>idx && c[i]==c[i-1]) continue;
            if(t<0) return;
            temp.push_back(c[i]);
            solve(c,t-c[i],temp,i+1,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates, target, temp, 0, ans);
        return ans;
    }
};