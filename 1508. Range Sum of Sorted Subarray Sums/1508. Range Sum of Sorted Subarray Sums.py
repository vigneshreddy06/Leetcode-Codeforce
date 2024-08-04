class Solution:
    def rangeSum(self, nums: list[int], n: int, left: int, right: int) -> int:

        ans = nums
        nums = list(accumulate(nums, initial = 0))

        for i, m in enumerate(nums):

            for n in nums[i + 2:]:
                ans.append(n - m)

        ans.sort()        
        
        return  sum(ans[left - 1:right]) %1_000_000_007 