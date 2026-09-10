class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=nums.size()-1;
        int s=0;
        
        while(s<=l){
            int m=(s+l)/2;
            if (nums[m]==target){
                return m;
            }
            else if (nums[m]>target){
                l=m-1;
            }
           else if(nums[m]<target){
            s=m+1;
           }
           
        }
        return -1;
        
    }
};