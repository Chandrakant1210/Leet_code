class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=0;
        int c=0;
        for(auto x:nums){
            if(c==0)
            cand=x;
            if(cand==x)
            c++;
            else
            c--;
        }
        return cand;
    }
};