class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==1 and n==0)
            return;
        if(m==0){
            nums1=nums2;
            return;
        }
        int i=m-1,j=n-1,k=m+n-1;
        while(j>=0 and i>=0){
            if(nums1[i]<=nums2[j]) {
                nums1[k]=nums2[j];
                k--;j--;
            }
            else{
                nums1[k]=nums1[i];
                i--;k--;
            }
        }
        if(j==k){
            j=0;
            for(int l=0;l<=k;l++){
                nums1[l]=nums2[j];
                j++;
            }
        }
    }
};