class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        mp=defaultdict(int)
        for x in nums:
            mp[x]+=1
            if mp[x]>len(nums)//2:
                return x
        return nums[0]