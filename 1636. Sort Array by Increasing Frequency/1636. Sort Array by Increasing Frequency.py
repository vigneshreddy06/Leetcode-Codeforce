class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        return sum([[n] * c for n, c in sorted(Counter(nums).items(), key=lambda p: (p[1], -p[0]))], [])