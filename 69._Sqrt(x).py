class Solution:
    def mySqrt(self, x):
        sq=math.sqrt(x)
        sq=str(sq)
        li=sq.split('.')
        return int(li[0])