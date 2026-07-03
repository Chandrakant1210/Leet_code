class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int w=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[w++]=nums[i];
            }
        }
        while(w<nums.size()){

            nums[w++]=0;
        }
    }
};