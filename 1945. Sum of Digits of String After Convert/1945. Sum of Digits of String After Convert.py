class Solution:
    def getLucky(self, s: str, k: int) -> int:
        return reduce(lambda s,_: sum(map(int, str(s))), range(k), ''.join(str(ord(c)-96) for c in s))