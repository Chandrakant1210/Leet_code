class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(count(begin(res), end(res),nums[i])==1)
            continue;
            else
            res.push_back(nums[i]);
        }
        nums = res;
        return res.size();
    }
};