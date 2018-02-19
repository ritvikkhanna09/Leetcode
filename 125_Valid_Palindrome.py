class Solution:
    def isPalindrome(self, s):
        s=s.lower()
        l=[]
        for i in s:
            if(i.isalnum()):
                l.append(i)
        for i in range(len(l)):
            if(l[i]==l[len(l)-1-i]):
                continue
            else:
                return False
        return True
        