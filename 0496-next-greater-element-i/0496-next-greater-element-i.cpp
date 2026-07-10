class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int c=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                   
                    while(j<nums2.size()){
                        if(nums1[i]<nums2[j]){
                             c=1;
                            res.push_back(nums2[j]);
                            break;
                        }
                        j++;
                    }
                }
                
            }
            if(c==0)
            res.push_back(-1);
        }
        return res;
    }
};