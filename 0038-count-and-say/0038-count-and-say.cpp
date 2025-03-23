class Solution {
public:
    void solve(string &s,string temp, int n){
        if(n==1) return;
        int i=0;int j=0;
        while(j<s.size()){
            if(s[i]==s[j]) j++;
            else{
                char ch = '0'+(j-i);
                temp = temp + ch + s[i];
                i=j;
                j++;
            }
            if(j==s.size()){
                char ch = '0'+(j-i);
                temp = temp + ch + s[i];
            }
        }
        s = temp;
        solve(s,"",n-1);
    }
    string countAndSay(int n) {
        string s = "1";
        solve(s,"",n);
        return s;
    }
};