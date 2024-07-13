class Solution:
    def survivedRobotsHealths(self, positions: List[int], healths: List[int], directions: str) -> List[int]:
        n = len(positions)
        arr = sorted(zip(positions, directions, range(n)))
        stack = []

        for _, d, i in arr:

            if d == 'R':
                stack.append(i)
                continue

            while stack and healths[i] > 0:
                if healths[stack[-1]] ==  healths[i]:
                    healths[stack.pop()] = 0
                    healths[i] = 0
                elif healths[stack[-1]] >  healths[i]:
                    healths[stack[-1]] -= 1
                    healths[i] = 0
                else:
                    healths[stack.pop()] = 0
                    healths[i] -= 1

        return [h for h in healths if h != 0]