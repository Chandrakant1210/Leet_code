class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        mp={}
        n=len(nums)
        for x in nums:
            if x in mp:
                mp[x]+=1
                if(mp[x]>n//2):
                    return x
            else:
                mp[x]=1
        else:
            return nums[0]
        
