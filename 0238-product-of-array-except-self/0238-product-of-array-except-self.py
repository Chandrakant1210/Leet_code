class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result=[1]*len(nums)
        r=1
        l=1
        n=len(nums)
        for i in range(n):
            result[i]=l
            l=l*nums[i]
        for i in range(n-1,-1,-1):
            result[i]*=r
            r*=nums[i]
        return result


        