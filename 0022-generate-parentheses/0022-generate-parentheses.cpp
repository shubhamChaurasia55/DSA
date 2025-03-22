class Solution {
public:
    void solve(string& s,vector<string>&ans,int n, int o, int c){
        if(c == n){
            ans.push_back(s);
            return;
        }
        if(o<n){
            s.push_back('(');
            solve(s,ans,n,o+1,c);
            s.pop_back();
        } 
        if(o>c){
            s.push_back(')');
            solve(s,ans,n,o,c+1);
            s.pop_back();
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string s = "";
        solve(s,ans,n,0,0);
        return ans;
    }
};