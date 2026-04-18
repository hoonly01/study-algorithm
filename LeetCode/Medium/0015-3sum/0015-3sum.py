class Solution:
    def threeSum(self, nums: list[int]) -> list[list[int]]:
        nums.sort()
        result = []     

        for i in range(0, len(nums)): # 0~5
            l = i+1
            r = len(nums)-1
            if i > 0 and nums[i] == nums[i-1]:                      # 중복되면 넘겨야 함
                continue

            while(l < r):
                sum = nums[i] + nums[l] + nums[r]
                if(sum == 0):
                    result.append([nums[i], nums[l], nums[r]])
                    l += 1
                    r -= 1
                    while l < r and nums[l] == nums[l - 1]:         # 중복되면 넘겨야 함
                        l += 1
                    while l < r and nums[r] == nums[r + 1]:         # 중복되면 넘겨야 함
                        r -= 1
                elif(sum < 0):
                    l += 1
                else:
                    r -= 1
        return result


"""
투포인터 예제
l, r
"""