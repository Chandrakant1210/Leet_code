class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int s=n*(n+1)/2;
        for(auto num:nums){
            s-=num;
        }
        return s;
    }
};