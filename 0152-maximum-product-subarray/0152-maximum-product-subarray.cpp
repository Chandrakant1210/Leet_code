class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=INT_MIN;
        int mul=1;
        for(auto x: nums){
            mul*=x;
            m=max(m,mul);
            if(mul==0)
            mul=1;
        }
        mul=1;
        for(int i=nums.size()-1;i>=0;i--){
            mul*=nums[i];
             
            m=max(m,mul);
             
            if(mul==0)
            mul=1;
        }
        return m;
    }
};