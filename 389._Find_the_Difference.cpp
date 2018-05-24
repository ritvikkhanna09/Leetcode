class Solution:
    def findTheDifference(self, s, t):
        s=sorted(s)
        t=sorted(t)
        for i in range(0,len(t)-1):
            if t[i]!=s[i]:
                return t[i]
        return t[-1]