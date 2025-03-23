class Solution {
public:
    // void solve(string &s,string temp, int n){
    //     if(n==1) return;
    //     int i=0;int j=0;
    //     while(j<s.size()){
    //         if(s[i]==s[j]) j++;
    //         else{
    //             char ch = '0'+(j-i);
    //             temp = temp + ch + s[i];
    //             i=j;
    //             j++;
    //         }
    //         if(j==s.size()){
    //             char ch = '0'+(j-i);
    //             temp = temp + ch + s[i];
    //         }
    //     }
    //     s = temp;
    //     solve(s,"",n-1);
    // }
    string countAndSay(int n) {
        if(n==1) return "1";
        string temp = countAndSay(n-1);
        string ans = "";
        int freq = 1;
        char ch = temp[0];
        for(int i=1;i<temp.size();i++){
            char dh = temp[i];
            if(ch == dh){
                freq++;
            }
            else{ // ch != dh
                ans += (to_string(freq) + ch);
                freq = 1;
                ch = dh;
            }
        }
        ans += (to_string(freq) + ch);
        return ans;
    }
};