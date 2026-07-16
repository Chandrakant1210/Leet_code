class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int a=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
        int s=nums[i];
        if(s==k){
                a++;
            }
        for(int j=i+1;j<n;j++){
            s+=nums[j];
            if(s==k){
                a++;
            }
        }
        }
        return a;
    }
};