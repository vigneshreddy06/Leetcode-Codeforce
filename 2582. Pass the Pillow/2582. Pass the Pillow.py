class Solution:
    def passThePillow(self, n: int, time: int) -> int:
        time = time % (2 * n - 2)
        return 1 + time if time < n else 2 * n - time - 1