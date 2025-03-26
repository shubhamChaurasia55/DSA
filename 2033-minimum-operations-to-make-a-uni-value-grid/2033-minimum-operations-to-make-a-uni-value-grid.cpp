class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int r = grid.size();
        int c = grid[0].size();

        vector<int> arr;
        int rem = grid[0][0]%x;
        bool flag = false;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j] % x != rem){
                    flag = true;
                    break;
                }
                arr.push_back(grid[i][j]/x);
            }
        }
        if(flag) return -1;
        sort(arr.begin(), arr.end());
        int min_op = 0;
        for(int i=0;i<arr.size();i++){
            min_op += abs(arr[arr.size()/2] - arr[i]);
        }
        return min_op;
    }
};