class Solution {
public:
    string solve(string str,int k,string ans){
        int n = str.size();
        if(n==1){
            ans += str;
            return ans;
        }
        int fact = 1;
        for(int i=2;i<=n-1;i++) fact *= i;

        int idx = k/fact;
        if(k%fact==0) idx--;
        char ch = str[idx];
        int q = 1;
        if(k%fact==0) q=fact;
        else q = k%fact;
        return solve(str.substr(0,idx)+str.substr(idx+1),q,ans+ch);
    }
    string getPermutation(int n, int k) {
        string str = "";
        for(int i=1;i<=n;i++) str += to_string(i);
        return solve(str,k,"");
    }
};