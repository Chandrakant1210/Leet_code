class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      
      int l=1,r=1;
      int n=nums.size();
      vector<int> res(n);
      for(int i=0;i<n;i++){
        res[i]=l;
        l=l*nums[i];
      }
      for (int i=n-1;i>=0;i--){
        res[i]*=r;
        r=r*nums[i];
      }
      return res;

    }
};