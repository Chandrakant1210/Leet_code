class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> res;
        for (int i=0;i<nums.size();i++){
            if(res[nums[i]]>0)
            return 1;
            else{
                res[nums[i]]++;
            }
        }
        return 0;
    }
};