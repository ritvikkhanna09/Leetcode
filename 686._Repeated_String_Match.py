class Solution(object):
    def repeatedStringMatch(self, A, B):
        times = -(-len(B) // len(A))
        for i in range(2):
            if B in (A * (times + i)):
                return times + i
        return -1