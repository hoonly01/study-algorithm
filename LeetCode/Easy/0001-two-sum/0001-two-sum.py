class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        num_map = {}
        for i, num in enumerate(nums):
            num_map[num] = i                       # {2:0, 7:1, ...} -> {숫자, index}

        for i, num in enumerate(nums):
            # 2번째 수가 key에 있고, 그게 i(첫번째 수)와 다를 때
            if (target - num) in num_map and (i != num_map[target-num]):
                return [i, num_map[target-num]]

"""
v1
target - i를 만들고 배열에 있는지 검색

for i, n in enumerate(nums):
    complement = target - n
    if complement in nums[i+1:]:
        result = [i, nums[i+1:].index(complement)+i+1]
return result
"""

"""
v2 (학습용)
타겟에서 첫번째 수를 뺀 결과를 키로 조회
{target-i, complement} 인 셈
"""
