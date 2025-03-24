class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());
        int n = meetings.size();
        int count = 0;
       

        for(int i=0;i<n-1;i++){
            if(meetings[i][1] < meetings[i+1][0]){
                count += (meetings[i+1][0] - meetings[i][1] - 1);
            }
            else if(meetings[i][1] < meetings[i+1][1]) continue;
            else{
                meetings[i+1][1] = meetings[i][1];
            }
        }
        if(meetings[0][0] != 1) count += (meetings[0][0] - 1);
        count +=(days - meetings[n-1][1]);
        return count;
    }
};