class Solution {
public:
    void revPart(int i, int j, vector<int>& nums){
            while(i<=j){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
                j--;
            }
            return;
    }
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k>n) k = k%n;
        revPart(0,n-k-1,nums);
        revPart(n-k,n-1,nums);
        revPart(0,n-1,nums);
    }
};