class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        al="qwertyuiopasdfghjklzxcvbnm"
        lo=[s.index(l) for l in al if s.count(l)==1]
        return min(lo) if len(lo) > 0 else -1