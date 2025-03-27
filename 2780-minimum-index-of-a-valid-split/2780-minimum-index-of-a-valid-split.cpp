class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        // Boyer-Moore Voting Algorithm
        int count = 0, m_ele = 0;
        for(int num : nums){
            if(count == 0) m_ele = num;
            if(num == m_ele) count++;
            else count--;
        }
        count = 0;
        for(int num : nums){
            if(num == m_ele) count++;
        }
        int n = nums.size();

        if(n%2!=0 && count<n/2+2) return -1;
        if(n%2==0 && count<n/2+1) return -1;

        int m = 0;
        int idx = -1;
        for(int i=0;i<n;i++){
            if(nums[i]!=m_ele) continue;
            m++;
            if((i+1)/2<m){
                idx = i;
                break;
            } 
        }
        return idx;

    }
};