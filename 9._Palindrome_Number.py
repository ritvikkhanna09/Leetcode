class Solution:
    def isPalindrome(self, x):
        l=list(str(x))
        print(l)
        if(l[0]=='-'):
            return False
        for i in range(len(l)):
            if(l[i]!=l[len(l)-1-i]):
                return False
        return True