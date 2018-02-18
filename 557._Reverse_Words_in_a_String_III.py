class Solution:	
    def reverseWords(self, s):
        l=s.split()
        for i in range(0,len(l)):
            l[i]=l[i][::-1]
        s=" ".join(l)
        return s
        