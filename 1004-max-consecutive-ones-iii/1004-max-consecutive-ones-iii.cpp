class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,ans=0,w=0;
        int n=nums.size();
        for(int right=0;right<n;right++){
            w+=nums[right];
            while(w+k<right-left+1){
                w-=nums[left];
                left++;
            }
            ans=max(ans,(right-left)+1);
        }
        return ans;
    }
};