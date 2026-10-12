class Solution:
    def findKthLargest(self, nums: list[int], k: int) -> int:
        n=len(nums)
        if n<k:
            return -1
        nums.sort()
        return nums[n-k]
        