class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        result = []
        n = 1
        for i in range(0, len(nums)):
            result.append(n)
            n = n * nums[i]
        n = 1
        for i in range(len(nums)-1, -1, -1):        # 3에서 0까지 
            result[i] = result[i] * n
            n = n * nums[i]
        return result


"""
왼쪽 곱셈 결과 O(N) * 오른쪽 곱셈 결과 O(N)
O(N)을 2번 수행 -> O(N)
)
"""