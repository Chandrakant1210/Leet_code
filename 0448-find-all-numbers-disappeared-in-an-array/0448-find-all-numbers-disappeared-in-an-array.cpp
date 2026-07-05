class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> n;
        for(int i=1;i<=nums.size();i++){
           if(!binary_search(begin(nums),end(nums), i))
            n.push_back(i);
        }
        return n;
    }
};