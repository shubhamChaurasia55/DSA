class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        // for previous greatest array
        vector<int> pg(n);
        pg[0]  = -1;
        int max = height[0];
        for(int i=1;i<n;i++){
            pg[i] = max;
            if(height[i]>max) max = height[i];
        }

        // for next greatest array
        vector<int> ng(n);
        ng[n-1]  = -1;
        max = height[n-1];
        for(int i=n-2;i>=0;i--){
            ng[i] = max;
            if(height[i]>max) max = height[i];
        }

        // trapping water
        int trap_water = 0;
        for(int i=1;i<n-1;i++){
            int minOfTwo = min(pg[i],ng[i]);
            if(height[i]<minOfTwo){
                trap_water += (minOfTwo - height[i]);
            }
        }
        return trap_water;
    }
};