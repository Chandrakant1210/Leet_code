class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1) return 0;
        int n=nums.size();
        int p=1;
        int left=0;
        int c=0;
        for( int right=0;right<n;right++){
            p*=nums[right];
            while(p>=k){
                p/=nums[left];
                left++;
            }
            c+=right-left+1;
        }
        return c;
    }
};