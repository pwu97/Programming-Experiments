# twoSum1:
# Time:  O(n)
# Space: O(n)
# twoSum2:
# Time:  O(n^2)
# Space: O(1)

# Given an array of integers, return indices of the two numbers
# such that they add up to a specific target.
#
# You may assume that each input would have exactly one solution.
#
# Example:
# Given nums = [2, 7, 11, 15], target = 9,
#
# Because nums[0] + nums[1] = 2 + 7 = 9,
# return [0, 1].

class Solution(object):
    def twoSum1(self, nums, target):
        rem = dict()
        
        for i, num in enumerate(nums):
            if nums[i] in rem:
                return [i, rem[nums[i]]]
            else:
                rem[target - nums[i]] = i
                
    def twoSum2(self, nums, target):
        for i in range(len(nums)):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
            
print(Solution().twoSum1([2,7,11,15], 9))
# [0, 1]
print(Solution().twoSum1([3,2,4], 6))
# [2, 1]
print(Solution().twoSum1([3,3], 6))
# [1, 0]
print(Solution().twoSum2([2,7,11,15], 9))
# [0, 1]
print(Solution().twoSum2([3,2,4], 6))
# [1, 2]
print(Solution().twoSum2([3,3], 6))
# [0, 1]