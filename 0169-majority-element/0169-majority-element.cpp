class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> res={};
        for(auto x: nums){
            if(res.count(x)==1){
                res[x]++;
                if(res[x]>nums.size()/2)
                return x;
            }
            else
            res[x]++;
        }
        return nums[0];
    }
};