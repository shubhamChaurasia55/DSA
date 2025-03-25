class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=1;
        while(j<n){
            if(nums[j]>nums[j-1]){
                i++;
                nums[i] = nums[j];
                j++;
            }
            else j++;
        }
        return i+1;
    }
};