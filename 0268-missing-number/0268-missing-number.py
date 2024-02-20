class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        
        m = max(nums)
        for i in range(0,m):
            if i not in nums:
                return i
        return m+1