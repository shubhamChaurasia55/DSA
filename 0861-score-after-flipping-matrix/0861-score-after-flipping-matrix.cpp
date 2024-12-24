class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // step 1. row flip when 0th column element is 0
        for (int i = 0; i < m; i++) {
            if (grid[i][0] == 0) {
                for (int j = 0; j < n; j++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }

        // step 2. column flip when no. of 0's > no. of i's
        for (int j = 0; j < n; j++) {
            int count = 0;
            for (int i = 0; i < m; i++) {
                if (grid[i][j] == 0)
                    count++;
            }
            if (count > m / 2) {
                for (int i = 0; i < m; i++) {
                    if (grid[i][j] == 0)
                        grid[i][j] = 1;
                    else
                        grid[i][j] = 0;
                }
            }
        }

        // for binary to decimal and max sum
        int sum = 0;
        for (int i = 0; i < m; i++) {
            int dec = 0;
            int pow = 1;
            for (int j = n - 1; j >= 0; j--) {
                dec += grid[i][j] * pow;
                pow *= 2;
            }
            sum += dec;
        }
        return sum;
    }
};