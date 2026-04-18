class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i, n in enumerate(nums):
            complement = target - n
            if complement in nums[i+1:]:
                result = [i, nums[i+1:].index(complement)+i+1]
        return result

"""
target - i를 만들고 배열에 있는지 검색
"""
