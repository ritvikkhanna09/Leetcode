class Solution(object):
    def isIsomorphic(self, s, t):
        list_s = [0]*256
        list_t = [0]*256
        for i in range(len(s)):
            if list_s[ord(s[i])]!=list_t[ord(t[i])]:
                return False
            list_s[ord(s[i])]=i+1
            list_t[ord(t[i])]=i+1
        return True