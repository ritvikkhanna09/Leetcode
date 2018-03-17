class Solution:
    def titleToNumber(self, s):
        n=len(s)
        col=0
        for i in range(n-1):
            col=col+(ord(s[i])-64)*math.pow(26,n-1-i)
        last=ord(s[-1])-64
        return int(col+last)