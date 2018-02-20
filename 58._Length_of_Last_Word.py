class Solution:
    def lengthOfLastWord(self, s):
        s=s.strip(' ').split(" ")
        return len(s[-1])