class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        d = {}
        final = []

        for i in nums1:
            if i not in d:
                d[i] = 1
            else:
                d[i] += 1

        for i in nums2:
            if i in d:
                if d[i] > 1:
                    d[i] -= 1
                else:
                    del d[i]
                final.append(i)

        return final