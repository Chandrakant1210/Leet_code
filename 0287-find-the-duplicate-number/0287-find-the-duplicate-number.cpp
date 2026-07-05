class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int ,int> res;
        for(int i=0;i<nums.size();i++){
            res[nums[i]]++;
        }
        for(auto x: res){
            if(x.second>1)
            return x.first;
        }
        return 0;
    }
};