class Solution {
public:
    void solve(string s,string &temp, vector<string> &ans){
        if(s==""){
            ans.push_back(temp);
            return;
        }
        for(int i= 0;i<s.size();i++){
            temp.push_back(s[i]);
            // s = s.substr(0,i) + s.substr(i+1);
            solve((s.substr(0,i) + s.substr(i+1)),temp,ans);
            temp.pop_back();
        }
    }
    string getPermutation(int n, int k) {
        string s = "";
        string temp = "";
        for(int i=1;i<=n;i++){
            s += to_string(i);
        }
        vector<string> ans;
        solve(s,temp,ans);
        return ans[k-1];
        
    }
};