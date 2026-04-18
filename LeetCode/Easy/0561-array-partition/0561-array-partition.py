class Solution:
    def arrayPairSum(self, nums: List[int]) -> int:
        nums.sort()
        ans = sum(nums[::2])
        return ans

"""
v1
짝수번째 값 계산

ans = 0
nums.sort()
for i in range(0, len(nums)//2):
    ans += nums[i*2]
return ans
"""

"""
v2 pythonic way
slicing
"""