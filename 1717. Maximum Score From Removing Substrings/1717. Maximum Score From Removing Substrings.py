class Solution:
    def maximumGain(self, s: str, x: int, y: int) -> int:
        main = []
        helper = []
        res = 0

        for letter in s:
            if main and main[-1] == "a" and letter == "b" and max(x, y) == x:
                res += x
                main.pop(-1)
            elif main and main[-1] == "b" and letter == "a" and max(x, y) == y:
                res += y
                main.pop(-1)
            else:
                main.append(letter)

        for letter in main:
            if helper and helper[-1] == "a" and letter == "b":
                res += x
                helper.pop(-1)
            elif helper and helper[-1] == "b" and letter == "a":
                res += y
                helper.pop(-1)
            else:
                helper.append(letter)

        return res