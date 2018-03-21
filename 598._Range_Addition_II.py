class Solution:
    def maxCount(self, m, n, ops):
        if not ops:
            return m*n
        return min(op[0] for op in ops)*min(op[1] for op in ops)
        