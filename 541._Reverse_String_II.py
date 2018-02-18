class Solution:
    def reverseStr(self, s, k):
        if k >= len(s):
            return s[::-1]
        for i in range(0, len(s), 2 * k):
            s = s[:i]+s[i:i+k][::-1] + s[i+k:]
        return s